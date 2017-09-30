#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_RESOURCE_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_RESOURCE_HPP_

#include <EntityFramework/EntityRepresentation.hpp>

namespace asc {
	// TODO: Make template class with TEntity, TRepresentation, TController. . . Or just data driven?
	class EntityResource {
	public:
		EntityResource(void);
		~EntityResource(void);

		virtual EntityRepresentation *createRepresentation(Entity *_entity) const = 0;
	};
}

#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_RESOURCE_HPP_