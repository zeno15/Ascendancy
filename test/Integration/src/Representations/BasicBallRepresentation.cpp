#include <Representations/BasicBallRepresentation.hpp>

#include <Entities/BasicBallEntity.hpp>

namespace asc {
	BasicBallRepresentation::BasicBallRepresentation(Entity *_entity) :
		EntityRepresentation(_entity) {

	}
	BasicBallRepresentation::~BasicBallRepresentation(void) {

	}

	void BasicBallRepresentation::update(float _delta) {
	}
	void BasicBallRepresentation::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		BasicBallEntity *ball = static_cast<BasicBallEntity *>(m_Entity);

		_states.transform.translate(ball->m_Position);

		sf::CircleShape c(16.0f);
		c.setOrigin(16.0f, 16.0f);
		_target.draw(c, _states);
	}
}