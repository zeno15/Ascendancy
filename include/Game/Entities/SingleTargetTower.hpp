#ifndef INCLUDED_ASCENDANCY_GAME_ENTITIES_SINGLE_TARGET_TOWER_HPP_
#define INCLUDED_ASCENDANCY_GAME_ENTITIES_SINGLE_TARGET_TOWER_HPP_

#include <Game/Entities/Tower.hpp>
#include <Utility/XML.hpp>

namespace asc {
	/// <Summary>
	///	To be replaced with Lua scripting?
	/// Just implements the update function
	/// </Summary>
	class SingleTargetTower : public Tower {
	public:
		SingleTargetTower(unsigned int _id, Level& _level, XML _resource);
		virtual void update(float _delta) override;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_ENTITIES_SINGLE_TARGET_TOWER_HPP_