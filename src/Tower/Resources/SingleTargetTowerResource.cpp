#include <Tower/Resources/SingleTargetTowerResource.hpp>

#include <Tower/Representations/SingleTargetTowerRepresentation.hpp>

namespace tower {
	SingleTargetTowerResource::SingleTargetTowerResource(asc::XML _resourceXML) {

	}

	asc::EntityRepresentation *SingleTargetTowerResource::createRepresentation(asc::Entity *_entity) const {
		return new SingleTargetTowerRepresentation(_entity);
	}
}