#ifndef INCLUDED_ASCENDANCY_GAME_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_GAME_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_

#include <EntityFramework.hpp>

namespace asc {
	class SingleTargetTowerController : public EntityController {
	public:
		bool hasPriorityTarget(void) const;

	};
}

#endif // INCLUDED_ASCENDANCY_GAME_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_