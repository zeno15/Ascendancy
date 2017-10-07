#include <Tower/Entities/Tower.hpp>

#include <Tower/Resources/SingleTargetTowerResource.hpp>

namespace tower {

	Tower::Tower(unsigned int _id, asc::EntityController *_controller, asc::EntityResource *_resource, Level& _level) :
		Entity(_id, _controller),
		m_EntityResource(_resource),
		m_Level(_level) {

	}
	Tower::~Tower(void) {

	}

	asc::EntityRepresentation *Tower::createRepresentation(void) {
		return m_EntityResource->createRepresentation(this);
	}
}