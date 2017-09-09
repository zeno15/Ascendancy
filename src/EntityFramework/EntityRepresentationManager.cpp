#include <EntityFramework/EntityRepresentationManager.hpp>

namespace asc {
	EntityRepresentationManager::EntityRepresentationManager(void) {

	}
	EntityRepresentationManager::~EntityRepresentationManager(void) {
		m_Representations.clear();
	}


	void EntityRepresentationManager::registerEntity(std::shared_ptr<Entity> _entity) {
		m_Representations.emplace_back(std::move(std::make_unique<EntityRepresentation>(_entity)));
	}
	void EntityRepresentationManager::unregisterEntity(std::shared_ptr<Entity> _entity) {

	}
}