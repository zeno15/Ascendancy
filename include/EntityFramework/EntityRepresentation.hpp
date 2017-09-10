#ifndef INCLUDED_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_HPP_
#define INCLUDED_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_HPP_

#include <memory>

#include <SFML/Graphics.hpp>

#include <EntityFramework/Entity.hpp>

namespace asc {
	class EntityRepresentation {
	public:
		EntityRepresentation(std::shared_ptr<Entity> _entity);
		virtual ~EntityRepresentation(void);

		virtual void HandleEntityEvent(const EntityEvent& _event);

		const int EntityId;

		virtual void update(float _delta) = 0;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const = 0;

	protected:
		std::shared_ptr<Entity> m_Entity;
		int m_EntityEventCallbackHandle;
	};
}

#endif // INCLUDED_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_HPP_