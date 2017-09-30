#include <EntityFramework/EntityManager.hpp>
// TODO: Update controller and entity on update, and representation pre-render
namespace asc {
	EntityManager::EntityManager(void) {

	}
	EntityManager::~EntityManager(void) {
		m_Entities.clear();
	}

	void EntityManager::addEntity(Entity *_entity) {
		m_Entities.emplace_back(_entity);		
		OnEntityAdded.invoke(_entity);
	}
	void EntityManager::removeEntity(unsigned int _id) {
		for (unsigned int i = 0; i < m_Entities.size(); i++) {
			if (m_Entities[i]->Id == _id) {
				m_Entities.erase(m_Entities.begin() + i);
				OnEntityRemoved.invoke(_id);
				return;
			}
		}
	}
	Entity *EntityManager::getEntity(unsigned int _id) {
		for (Entity *e : m_Entities) {
			if (e->Id == _id) {
				return e;
			}
		}
		return nullptr;
	}
	
	void EntityManager::update(float _delta) {
		for (unsigned int i = 0; i < m_Entities.size(); i++) {
			m_Entities[i]->controllerUpdate(_delta);
		}
		for (unsigned int i = 0; i < m_Entities.size(); i++) {
			m_Entities[i]->update(_delta);
		}
	}
	bool EntityManager::handleEvent(const sf::Event& _event) {
		for (unsigned int i = 0; i < m_Entities.size(); i++) {
			if (m_Entities[i]->controllerHandleEvent(_event)) {
				return true;
			}
		}
		for (unsigned int i = 0; i < m_Entities.size(); i++) {
			if (m_Entities[i]->handleEvent(_event)) {
				return true;
			}
		}
		return false;
	}
}