#include <Game/Entities/Tower.hpp>

#include <Game/Resources/SingleTargetTowerResource.hpp>

namespace asc {

	Tower::Tower(unsigned int _id, EntityController *_controller, EntityResource *_resource) :
		Entity(_id, _controller),
		m_EntityResource(_resource) {

	}
	Tower::~Tower(void) {

	}

	void Tower::update(float _delta) {

	}

	EntityRepresentation *Tower::createRepresentation(void) {
		return m_EntityResource->createRepresentation(this);
	}
}