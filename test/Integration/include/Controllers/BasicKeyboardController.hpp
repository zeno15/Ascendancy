#ifndef INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_KEYBOARD_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_KEYBOARD_CONTROLLER_HPP_

#include <Controllers/BasicController.hpp>

namespace asc {
	class BasicKeyboardController : public BasicController {
	public:
		BasicKeyboardController(void);

		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;

		virtual float getSpeed(void) override;
		virtual sf::Vector2f getMovementDirection(void) override;
	private:
		float speed;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_KEYBOARD_CONTROLLER_HPP_