#include <catch/catch.hpp>

#include <Tower/Factory/TowerFactory.hpp>

namespace TowerTests {
    namespace TowerFactoryTests {
        TEST_CASE("TowerFactory constructor does not throw exception", "[TowerFactory]") {
            REQUIRE_NOTHROW(tower::TowerFactory());
        }
    }
}