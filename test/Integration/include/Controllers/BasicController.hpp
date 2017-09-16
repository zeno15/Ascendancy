#ifndef INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_CONTROLLER_HPP_

#include <EntityFramework/EntityController.hpp>

namespace asc {
	class BasicController : public EntityController {
	public:

		virtual float getSpeed(void) = 0;
		virtual sf::Vector2f getMovementDirection(void) = 0;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_CONTROLLER_HPP_