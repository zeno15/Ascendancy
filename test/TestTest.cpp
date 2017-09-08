#include <catch/catch.hpp>

namespace TestTest {
	namespace TestTestTests {
		TEST_CASE("Silly test case", "[Tag]") {
			REQUIRE(1 == 2 - 1);
		}
		TEST_CASE("Stupid Silly test case", "[Tag]") {
			REQUIRE_FALSE(1 != 2 - 1);
		}
	}
}