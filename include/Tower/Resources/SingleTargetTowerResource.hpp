#ifndef INCLUDED_ASCENDANCY_TOWER_RESOURCES_SINGLE_TARGET_TOWER_RESOURCE_HPP_
#define INCLUDED_ASCENDANCY_TOWER_RESOURCES_SINGLE_TARGET_TOWER_RESOURCE_HPP_

#include <EntityFramework.hpp>

#include <Utility/XML.hpp>

namespace tower {
	class SingleTargetTowerResource : public asc::EntityResource {
	public:
		SingleTargetTowerResource(asc::XML _resourceXML);

		virtual asc::EntityRepresentation *createRepresentation(asc::Entity *_entity) const override;
	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_RESOURCES_SINGLE_TARGET_TOWER_RESOURCE_HPP_
