#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_CONTROLLER_HPP_

#include <SFML/Window/Event.hpp>

namespace asc {
	class Entity;
	class EntityController {
	public:
		EntityController(void);
		virtual ~EntityController(void);

		virtual void update(float _delta);
		virtual bool handleEvent(const sf::Event& _event);

		void setEntity(Entity *_entity);

	protected:
		Entity *m_Entity;
	};
}

#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_CONTROLLER_HPP_