#ifndef INCLUDED_ASCENDANCY_GAME_RESOURCES_SINGLE_TARGET_TOWER_RESOURCE_HPP_
#define INCLUDED_ASCENDANCY_GAME_RESOURCES_SINGLE_TARGET_TOWER_RESOURCE_HPP_

#include <EntityFramework.hpp>

#include <Utility/XML.hpp>

namespace asc {
	class SingleTargetTowerResource : public EntityResource {
	public:
		SingleTargetTowerResource(XML _resourceXML);

		virtual EntityRepresentation *createRepresentation(Entity *_entity) const override;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_RESOURCES_SINGLE_TARGET_TOWER_RESOURCE_HPP_