#ifndef INCLUDED_ASCENDANCY_GAME_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_
#define INCLUDED_ASCENDANCY_GAME_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_

#include <EntityFramework.hpp>

namespace asc {
	class SingleTargetTowerController : public EntityController {
	public:
		SingleTargetTowerController(float _range);

		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;

		float getRange(void) const;
		void setRange(float _range);

	private:
		float m_Range;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_CONTROLLERS_SINGLE_TARGET_TOWER_CONTROLLER_HPP_