#include <catch/catch.hpp>

#include <Tower/DataAccess/TowerDataAccess.hpp>
#include <Tower/Resources/SingleTargetTowerResource.hpp>

namespace GameTests {
	namespace TowerDataAccessTests {

		const std::string basicTowerResource = R"(
<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
<Tower Id="BASICTOWER" Name="Basic Tower" Class="SingleTarget">
  <Property Name="Range" Value="32.0" />
  <Property Name="Arc" Value="360" />
  <Property Name="FireRate" Value="1.0" />
  <Property Name="Projectile" Value="BASICPROJECTILE" />
</Tower>)";

		const std::string creepResource = R"(
<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
<Creep Id="BASIC_CREEP" Name="Basic Creep">
  <Property Name="Health" Value="10" />
</Creep>)";

		TEST_CASE("If resource fails to be parsed as xml nullptr resource is returned", "[TowerDataAccess]") {
			asc::EntityResource *resource = tower::TowerDataAccess::loadTowerResourceFromString("NOT XML");
			REQUIRE(resource == nullptr);
		}

		TEST_CASE("If root level node is not tower nullptr resource is returned", "[TowerDataAccess]") {
			asc::EntityResource *resource = tower::TowerDataAccess::loadTowerResourceFromString(creepResource);
			REQUIRE(resource == nullptr);
		}

		TEST_CASE("Tower with unrecognised class returns nullptr resource", "[TowerDataAccess]") {
			REQUIRE(nullptr == tower::TowerDataAccess::loadTowerResourceFromString("<Tower />"));
		}

		TEST_CASE("SingleTarget tower node returns SingleTarget resource", "[TowerDataAccess]") {
			asc::EntityResource *resource = tower::TowerDataAccess::loadTowerResourceFromString(basicTowerResource);
			REQUIRE(nullptr != resource);

			tower::SingleTargetTowerResource *singleTargetResource = static_cast<tower::SingleTargetTowerResource *>(resource);
			REQUIRE(nullptr != singleTargetResource);
		}
	}
}