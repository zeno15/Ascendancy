#include <Game/Entities/Tower.hpp>

#include <Game/Resources/SingleTargetTowerResource.hpp>

namespace asc {

	Tower::Tower(unsigned int _id, EntityController *_controller, EntityResource *_resource, Level& _level) :
		Entity(_id, _controller),
		m_EntityResource(_resource),
		m_Level(_level) {

	}
	Tower::~Tower(void) {

	}

	EntityRepresentation *Tower::createRepresentation(void) {
		return m_EntityResource->createRepresentation(this);
	}
}