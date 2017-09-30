#include <Game/Controllers/SingleTargetTowerController.hpp>

namespace asc {
	SingleTargetTowerController::SingleTargetTowerController(float _range) :
		m_Range(_range) {

	}

	void SingleTargetTowerController::update(float _delta) {
		// check if target is still in range and alive
		// if not remove target

		// if no target
		// try find new one
	}
	bool SingleTargetTowerController::handleEvent(const sf::Event& _event) {
		return false;
	}

	float SingleTargetTowerController::getRange(void) const {
		return m_Range;
	}
	void SingleTargetTowerController::setRange(float _range) {
		m_Range = _range;
	}
}