#include <Entities/BasicBallEntity.hpp>

#include <Representations/BasicBallRepresentation.hpp>

namespace asc {
	BasicBallEntity::BasicBallEntity(unsigned int _id, EntityController *_controller) :
		Entity(_id, _controller) {

	}
	BasicBallEntity::~BasicBallEntity(void) {

	}

	EntityRepresentation *BasicBallEntity::createRepresentation(void) {
		return new BasicBallRepresentation(std::shared_ptr<Entity>(this));
	}
}