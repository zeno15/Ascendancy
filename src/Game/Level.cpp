#include <Game/Level.hpp>

namespace asc {

	Level::Level(void) {

		m_EntityRepresentationManagerAddedCallbackId = m_EntityManager.OnEntityAdded.registerCallback(std::bind(
			&EntityRepresentationManager::handleRegisterEntity,
			&m_EntityRepresentationManager,
			std::placeholders::_1));
		m_EntityRepresentationManagerRemovedCallbackId = m_EntityManager.OnEntityRemoved.registerCallback(std::bind(
			&EntityRepresentationManager::handleUnregisterEntity,
			&m_EntityRepresentationManager,
			std::placeholders::_1));
	}

	Level::~Level(void) {
		m_EntityManager.OnEntityAdded.unregisterCallback(m_EntityRepresentationManagerRemovedCallbackId);
		m_EntityManager.OnEntityRemoved.unregisterCallback(m_EntityRepresentationManagerRemovedCallbackId);
	}

	void Level::update(float _delta) {
		m_EntityManager.update(_delta);
		m_EntityRepresentationManager.update(_delta);
	}

	bool Level::handleEvent(const sf::Event& _event) {
		if (m_EntityManager.handleEvent(_event)) {
			return true;
		}
		return false;
	}

	void Level::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		m_EntityRepresentationManager.draw(_target, _states);
	}

	void Level::createTestLevel(unsigned int _width, unsigned int _height) {
		m_Tiles.clear();
		for (int x = 0; x < static_cast<int>(_width); x++) {
			for (int y = 0; y < static_cast<int>(_height); y++) {
				m_Tiles.emplace_back(x, y);
			}
		}
	}
}