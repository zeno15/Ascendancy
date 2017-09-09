#include <EntityFramework/EntityManager.hpp>

namespace asc {
	EntityManager::EntityManager(void) {

	}
	EntityManager::~EntityManager(void) {
		m_Entities.clear();
	}

	void EntityManager::addEntity(Entity *_entity) {
		m_Entities.emplace_back(_entity);
	}
}