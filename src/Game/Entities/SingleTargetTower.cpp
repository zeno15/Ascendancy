#include <Game/Entities/SingleTargetTower.hpp>

#include <Game/Controllers/SingleTargetTowerController.hpp>
#include <Game/Resources/SingleTargetTowerResource.hpp>

namespace asc {

	SingleTargetTower::SingleTargetTower(unsigned int _id, Level& _level, XML _resource) :
		Tower(_id, new SingleTargetTowerController(), new SingleTargetTowerResource(_resource), _level) {

	}
	void SingleTargetTower::update(float _delta) {
		// find target, check the controller for a priority target
	}

}