#ifndef INCLUDED_ASCENDANCY_TOWER_DATA_ACCESS_TOWER_DATA_ACCESS_HPP_
#define INCLUDED_ASCENDANCY_TOWER_DATA_ACCESS_TOWER_DATA_ACCESS_HPP_

#include <EntityFramework/EntityResource.hpp>

namespace tower {
	class TowerDataAccess {
	public:
		static asc::EntityResource *loadTowerResourceFromString(const std::string& _resource);

		static const std::string TowerTag;
		static const std::string TowerClassAttribute;
		static const std::string SingleTargetAttribute;
	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_DATA_ACCESS_TOWER_DATA_ACCESS_HPP_
