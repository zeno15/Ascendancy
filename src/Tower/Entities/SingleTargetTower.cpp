#include <Tower/Entities/SingleTargetTower.hpp>

#include <Tower/Controllers/SingleTargetTowerController.hpp>
#include <Tower/Resources/SingleTargetTowerResource.hpp>

namespace tower {

	SingleTargetTower::SingleTargetTower(unsigned int _id, Level& _level, asc::XML _resource) :
		Tower(_id, new SingleTargetTowerController(), new SingleTargetTowerResource(_resource), _level) {

	}
	void SingleTargetTower::update(float _delta) {
		// find target, check the controller for a priority target
	}

}