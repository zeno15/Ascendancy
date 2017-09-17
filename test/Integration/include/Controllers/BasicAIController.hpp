#ifndef INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_AI_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_AI_CONTROLLER_HPP_

#include <Controllers/BasicController.hpp>

namespace asc {
	class BasicAIController : public BasicController {
	public:
		BasicAIController(void);

		virtual void update(float _delta) override;

		virtual float getSpeed(void) override;
		virtual sf::Vector2f getMovementDirection(void) override;
	private:
		float speed;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_AI_CONTROLLER_HPP_