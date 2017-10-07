#ifndef INCLUDED_ASCENDANCY_TOWER_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_TOWER_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_

#include <EntityFramework.hpp>

namespace tower {
	class SingleTargetTowerController : public asc::EntityController {
	public:
		bool hasPriorityTarget(void) const;

	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_
