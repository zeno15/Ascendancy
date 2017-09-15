#include <Representations/BasicBallRepresentation.hpp>

namespace asc {
	BasicBallRepresentation::BasicBallRepresentation(std::shared_ptr<Entity> _entity) : 
		EntityRepresentation(_entity) {

	}
	BasicBallRepresentation::~BasicBallRepresentation(void) {

	}

	void BasicBallRepresentation::update(float _delta) {
	}
	void BasicBallRepresentation::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {

	}
}