#include <catch/catch.hpp>

#include <Game/DataAccess/TowerDataAccess.hpp>
#include <Game/Resources/SingleTargetTowerResource.hpp>

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


		TEST_CASE("If resource fails to be parsed as xml nullptr resource is returned", "[TowerDataAccess]") {
			asc::EntityResource *resource = asc::TowerDataAccess::loadTowerResourceFromString("NOT XML");

			REQUIRE(resource == nullptr);
		}

		TEST_CASE("If root level node is not tower nullptr resource is returned", "[TowerDataAccess]") {
			const std::string creepResource = R"(
<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
<Creep Id="BASIC_CREEP" Name="Basic Creep">
  <Property Name="Health" Value="10" />
</Creep>)";

			asc::EntityResource *resource = asc::TowerDataAccess::loadTowerResourceFromString(creepResource);

			REQUIRE(resource == nullptr);
		}

		TEST_CASE("Tower with unrecognised class returns nullptr resource", "[TowerDataAccess]") {
			REQUIRE(nullptr == asc::TowerDataAccess::loadTowerResourceFromString("<Tower />"));
		}

		TEST_CASE("SingleTarget tower node returns SingleTarget resource", "[TowerDataAccess]") {
			asc::EntityResource *resource = asc::TowerDataAccess::loadTowerResourceFromString(basicTowerResource);
			REQUIRE(nullptr != resource);

			asc::SingleTargetTowerResource *singleTargetResource = static_cast<asc::SingleTargetTowerResource *>(resource);
		}
	}
}