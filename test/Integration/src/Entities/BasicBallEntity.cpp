#include <Entities/BasicBallEntity.hpp>

#include <Controllers/BasicController.hpp>
#include <Representations/BasicBallRepresentation.hpp>

#include <iostream>

namespace asc {
	BasicBallEntity::BasicBallEntity(unsigned int _id, EntityController *_controller) :
		Entity(_id, _controller) {

	}
	BasicBallEntity::~BasicBallEntity(void) {

	}

	void BasicBallEntity::update(float _delta) {
		// TODO: Abstract to BasicBallController
		BasicController *controller = static_cast<BasicController *>(m_Controller);

		m_Position += controller->getMovementDirection() * _delta * controller->getSpeed();
	}

	EntityRepresentation *BasicBallEntity::createRepresentation(void) {
		return new BasicBallRepresentation(this);
	}
}