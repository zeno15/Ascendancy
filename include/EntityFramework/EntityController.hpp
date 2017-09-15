#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_CONTROLLER_HPP_

#include <SFML/Window/Event.hpp>

namespace asc {
	class EntityController {
	public:
		EntityController(void);
		virtual ~EntityController(void);

		virtual void update(float _delta);
		virtual bool handleEvent(const sf::Event& _event);
	};
}

#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_CONTROLLER_HPP_