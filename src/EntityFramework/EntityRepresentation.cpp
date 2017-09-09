#include <EntityFramework/EntityRepresentation.hpp>

namespace asc {
	EntityRepresentation::EntityRepresentation(std::shared_ptr<Entity> _entity) :
		m_Entity(_entity),
		EntityId(_entity->Id) {
		m_EntityEventCallbackHandle = m_Entity->OnEntityEvent.registerCallback(std::bind(&EntityRepresentation::HandleEntityEvent, this, std::placeholders::_1));
	}
	EntityRepresentation::~EntityRepresentation(void) {
		m_Entity->OnEntityEvent.unregisterCallback(m_EntityEventCallbackHandle);
	}

	void EntityRepresentation::HandleEntityEvent(const EntityEvent& _event) {

	}
}