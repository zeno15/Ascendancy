#include <Controllers/BasicKeyboardController.hpp>

namespace asc {
	BasicKeyboardController::BasicKeyboardController(void) {

		speed = 128.0f;
	}

	void BasicKeyboardController::update(float _delta) {
	}
	bool BasicKeyboardController::handleEvent(const sf::Event& _event) {
		return false;
	}
	float BasicKeyboardController::getSpeed(void) {
		return speed;
	}
	sf::Vector2f BasicKeyboardController::getMovementDirection(void) {
		sf::Vector2f offset;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			offset.x -= 1.0f;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			offset.x += 1.0f;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			offset.y -= 1.0f;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			offset.y += 1.0f;
		}

		if (offset.x != 0.0f && offset.y != 0.0f) {
			offset.x *= 0.707f;
			offset.y *= 0.707f;
		}

		return offset;
	}
}