#ifndef INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_KEYBOARD_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_KEYBOARD_CONTROLLER_HPP_

#include <EntityFramework/EntityController.hpp>

namespace asc {
	class BasicKeyboardController : public EntityController {
		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_CONTROLLERS_BASIC_KEYBOARD_CONTROLLER_HPP_