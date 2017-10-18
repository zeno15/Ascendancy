#include <catch/catch.hpp>

#include <Tower/Factory/TowerFactory.hpp>

namespace TowerTests {
    namespace TowerFactoryTests {
        TEST_CASE("TowerFactory initially has no initialised towers", "[TowerFactory]") {
            tower::TowerFactory factory = tower::TowerFactory();
            REQUIRE(0 == factory.getInitialisedTowers().size());
        }

        TEST_CASE("Registering an XML resource adds a initialised tower", "[TowerFactory]") {
            tower::TowerFactory factory = tower::TowerFactory();
            const std::string TowerName = "TowerName";

            factory.initialise(TowerName, asc::XML());

            REQUIRE(1 == factory.getInitialisedTowers().size());
            REQUIRE(factory.isTowerInitialised(TowerName));
        }

        TEST_CASE("Creating a tower which is not registered returns nullptr", "[TowerFactory]") {
            tower::TowerFactory factory = tower::TowerFactory();
            const std::string TowerName = "TowerName";

            REQUIRE(nullptr == factory.createTowerInstance(TowerName));
        }
    }
}