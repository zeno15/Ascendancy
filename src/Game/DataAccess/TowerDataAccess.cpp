#include <Game/DataAccess/TowerDataAccess.hpp>

#include <Game/Resources/SingleTargetTowerResource.hpp>

#include <Utility/XML.hpp>

namespace asc {
	const std::string TowerDataAccess::TowerTag = "Tower";
	const std::string TowerDataAccess::TowerClassAttribute = "Class";
	const std::string TowerDataAccess::SingleTargetAttribute = "SingleTarget";

	EntityResource *TowerDataAccess::loadTowerResourceFromString(const std::string& _resource) {
		
		XML xml = XML();
		if (!xml.loadFromString(_resource)) {
			return false;
		}

		XML::XMLNode *towerNode = xml.getRoot()->getChildNodeWithTag(TowerTag);

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