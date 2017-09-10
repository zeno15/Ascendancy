#include <EntityFramework/EntityRepresentationManager.hpp>

namespace asc {
	EntityRepresentationManager::EntityRepresentationManager(void) {

	}
	EntityRepresentationManager::~EntityRepresentationManager(void) {
		m_Representations.clear();
	}


	void EntityRepresentationManager::handleRegisterEntity(std::shared_ptr<Entity> _entity) {
		m_Representations.emplace_back(_entity->createRepresentation());
	}

	void EntityRepresentationManager::handleUnregisterEntity(unsigned int _id) {
		for (unsigned int i = 0; i < m_Representations.size(); i++) {
			if (m_Representations[i]->EntityId == _id) {
				m_Representations.erase(m_Representations.begin() + i);
				return;
			}
		}
	}
	void EntityRepresentationManager::update(float _delta) {
		for (auto& rep : m_Representations) {
			rep->update(_delta);
		}
	}
	void EntityRepresentationManager::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		for (const auto& rep : m_Representations) {
			rep->draw(_target, _states);
		}
	}
}