#include <Controllers/BasicAIController.hpp>

namespace asc {

	BasicAIController::BasicAIController(void) {
		speed = 128.0f;
	}

	void BasicAIController::update(float _delta) {

	}

	float BasicAIController::getSpeed(void) {
		return speed;
	}
	sf::Vector2f BasicAIController::getMovementDirection(void) {
		return sf::Vector2f(1.0f, 0.0f);
	}
}