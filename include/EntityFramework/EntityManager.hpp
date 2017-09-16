#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_

#include <vector>

#include <EntityFramework/Entity.hpp>
#include <EntityFramework/EntityRepresentationManager.hpp>

#include <Utility/Signal.hpp>

namespace asc {
	class EntityManager {
	public:
		EntityManager(void);
		~EntityManager(void);

		Signal<Entity *> OnEntityAdded;
		Signal<unsigned int> OnEntityRemoved;

		void addEntity(Entity *_entity);
		void removeEntity(unsigned int _id);

		void update(float _delta);
		bool handleEvent(const sf::Event& _event);

	private:
		std::vector<Entity *> m_Entities;
	};
}

#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_MANAGER_HPP_