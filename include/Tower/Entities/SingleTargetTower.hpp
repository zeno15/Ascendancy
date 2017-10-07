#ifndef INCLUDED_ASCENDANCY_TOWER_ENTITIES_SINGLE_TARGET_TOWER_HPP_
#define INCLUDED_ASCENDANCY_TOWER_ENTITIES_SINGLE_TARGET_TOWER_HPP_

#include <Tower/Entities/Tower.hpp>
#include <Utility/XML.hpp>

namespace tower {
	/// <Summary>
	///	To be replaced with Lua scripting?
	/// Just implements the update function
	/// </Summary>
	class SingleTargetTower : public Tower {
	public:
		SingleTargetTower(unsigned int _id, Level& _level, asc::XML _resource);
		virtual void update(float _delta) override;
	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_ENTITIES_SINGLE_TARGET_TOWER_HPP_
