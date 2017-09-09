#ifndef INCLUDED_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_HPP_
#define INCLUDED_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_HPP_

#include <memory>

#include <EntityFramework/Entity.hpp>

namespace asc {
	class EntityRepresentation {
	public:
		EntityRepresentation(std::shared_ptr<Entity> _entity);
		virtual ~EntityRepresentation(void);

		virtual void HandleEntityEvent(const EntityEvent& _event);

		const int EntityId;

	protected:
		std::shared_ptr<Entity> m_Entity;
		int m_EntityEventCallbackHandle;
	};
}

#endif // INCLUDED_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_HPP_