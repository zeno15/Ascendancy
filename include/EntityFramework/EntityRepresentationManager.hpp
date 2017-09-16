#ifndef INCLUDED_ASCENDANCE_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_MANAGER_HPP_
#define INCLUDED_ASCENDANCE_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_MANAGER_HPP_

#include <vector>

#include <SFML/Graphics.hpp>

#include <EntityFramework/Entity.hpp>
#include <EntityFramework/EntityRepresentation.hpp>

namespace asc {
	class EntityRepresentationManager {
	public:
		EntityRepresentationManager(void);
		~EntityRepresentationManager(void);

		void handleRegisterEntity(Entity *_entity);
		void handleUnregisterEntity(unsigned int _id);

		void update(float _delta);
		void draw(sf::RenderTarget& _target, sf::RenderStates _states) const;

	private:
		std::vector<EntityRepresentation *> m_Representations;
	};
}

#endif // INCLUDED_ASCENDANCE_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_MANAGER_HPP_