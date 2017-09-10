#include <Scenes/IntegrationTestScene.hpp>

#include <cmath>

namespace asc {
	IntegrationTestScene::IntegrationTestScene(void) 
		: Scene("IntegrationTestScene") {

		m_AddedCallbackId = m_EntityManager.OnEntityAdded.registerCallback(std::bind(
			&EntityRepresentationManager::handleRegisterEntity, 
			&m_EntityRepresentationManager, 
			std::placeholders::_1));
		m_RemovedCallbackId = m_EntityManager.OnEntityRemoved.registerCallback(std::bind(
			&EntityRepresentationManager::handleUnregisterEntity, 
			&m_EntityRepresentationManager, 
			std::placeholders::_1));
	}
	IntegrationTestScene::~IntegrationTestScene(void) {
		m_EntityManager.OnEntityAdded.unregisterCallback(m_RemovedCallbackId);
		m_EntityManager.OnEntityRemoved.unregisterCallback(m_RemovedCallbackId);
	}

	void IntegrationTestScene::update(float _delta) {
		m_EntityManager.updateEntities(_delta);
		m_EntityRepresentationManager.update(_delta);
	}

	bool IntegrationTestScene::handleEvent(const sf::Event& _event) {
		if (_event.type == sf::Event::KeyPressed) {
			if (_event.key.code == sf::Keyboard::Left) {
				Application::getCamera().move(sf::Vector2f(-20.0f, +0.0f));
				return true;
			}
			if (_event.key.code == sf::Keyboard::Right) {
				Application::getCamera().move(sf::Vector2f(+20.0f, +0.0f));
				return true;
			}
			if (_event.key.code == sf::Keyboard::Up) {
				Application::getCamera().move(sf::Vector2f(+0.0f, +20.0f));
				return true;
			}
			if (_event.key.code == sf::Keyboard::Down) {
				Application::getCamera().move(sf::Vector2f(+0.0f, -20.0f));
				return true;
			}
			if (_event.key.code == sf::Keyboard::F1) {
				Application::getCamera().setPosition(sf::Vector2f());
				Application::getCamera().setZoom(1.0f);
				return true;
			}
		}

		if (_event.type == sf::Event::MouseWheelMoved) {
			if (_event.mouseWheel.delta > 0) {
				Application::getCamera().zoom(pow(1.1f, fabsf(static_cast<float>(_event.mouseWheel.delta))));
				return true;
			}
			if (_event.mouseWheel.delta < 0) {
				Application::getCamera().zoom(pow(1.0f / 1.1f, fabsf(static_cast<float>(_event.mouseWheel.delta))));
				return true;
			}
		}

		return false;
	}

	void IntegrationTestScene::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		sf::CircleShape c(32.0f);
		c.setOrigin(32.0f, 32.0f);
		_target.draw(c, _states);

		m_EntityRepresentationManager.draw(_target, _states);
	}
}