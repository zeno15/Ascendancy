#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_

#include <memory>
#include <vector>

#include <EntityFramework/Entity.hpp>
#include <EntityFramework/EntityRepresentationManager.hpp>

#include <Utility/Signal.hpp>

namespace asc {
	class EntityManager {
	public:
		EntityManager(void);
		~EntityManager(void);

		Signal<std::shared_ptr<Entity>> OnEntityAdded;
		Signal<unsigned int> OnEntityRemoved;

		void addEntity(Entity *_entity);
		void removeEntity(unsigned int _id);

		void updateEntities(float _delta);

	private:
		std::vector<std::unique_ptr<Entity>> m_Entities;
	};
}

#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_