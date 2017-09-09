#include <EntityFramework/EntityManager.hpp>

namespace asc {
	EntityManager::EntityManager(void) {

	}
	EntityManager::~EntityManager(void) {
		m_Entities.clear();
	}

	void EntityManager::addEntity(Entity *_entity) {
		m_Entities.emplace_back(_entity);		
		OnEntityAdded.invoke(std::shared_ptr<Entity>(_entity));
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
	
	void EntityManager::updateEntities(float _delta) {
		for (unsigned int i = 0; i < m_Entities.size(); i++) {
			m_Entities[i]->update(_delta);
		}
	}
}