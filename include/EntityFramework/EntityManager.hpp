#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_

#include <memory>
#include <vector>

#include <EntityFramework/Entity.hpp>
#include <EntityFramework/EntityRepresentationManager.hpp>

namespace asc {
	class EntityManager {
	public:
		EntityManager(void);
		~EntityManager(void);

		void addEntity(Entity *_entity);

	private:
		std::vector<std::unique_ptr<Entity>> m_Entities;
	};
}

#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER`_HPP_