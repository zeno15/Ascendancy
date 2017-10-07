#include <Tower/DataAccess/TowerDataAccess.hpp>

#include <Tower/Resources/SingleTargetTowerResource.hpp>

#include <Utility/XML.hpp>

namespace tower {
	const std::string TowerDataAccess::TowerTag = "Tower";
	const std::string TowerDataAccess::TowerClassAttribute = "Class";
	const std::string TowerDataAccess::SingleTargetAttribute = "SingleTarget";

	asc::EntityResource *TowerDataAccess::loadTowerResourceFromString(const std::string& _resource) {
		
		asc::XML xml = asc::XML();
		if (!xml.loadFromString(_resource)) {
			return nullptr;
		}

		asc::XML::XMLNode *towerNode = xml.getRoot()->getChildNodeWithTag(TowerTag);

		if (towerNode == nullptr) {
			return nullptr;
		}

		const std::string towerClass = towerNode->getAttribute(TowerClassAttribute);

		if (towerClass == SingleTargetAttribute) {
			return new SingleTargetTowerResource(xml);
		}

		return nullptr;
	}
}