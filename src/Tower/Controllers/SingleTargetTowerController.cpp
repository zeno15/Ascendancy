#include <Tower/Controllers/SingleTargetTowerController.hpp>

namespace tower {

	// Dont update targeting info etc here, the entity does that.
	/*
		All this is concerned with is input
			-	Or instead have get and set target, tower calls them
			-	but the player could override,? maybe towers get their own target, but look at the target the controller has given them
			-	and if in range they prioritise that one instead
		
	*/

	bool SingleTargetTowerController::hasPriorityTarget(void) const {
		return false;
	}
}