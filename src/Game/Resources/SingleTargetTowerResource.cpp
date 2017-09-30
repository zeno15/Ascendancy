#include <Game/Resources/SingleTargetTowerResource.hpp>

#include <Game/Representations/SingleTargetTowerRepresentation.hpp>

namespace asc {
	SingleTargetTowerResource::SingleTargetTowerResource(XML _resourceXML) {

	}

	EntityRepresentation *SingleTargetTowerResource::createRepresentation(Entity *_entity) const {
		return new SingleTargetTowerRepresentation(_entity);
	}
}