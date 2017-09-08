#include <catch/catch.hpp>

#include <Utility/StringHelpers.hpp>

namespace UtilityTests {
	namespace StringHelpersTests {
		TEST_CASE("startsWith works as expected", "[StringHelpers]") {
			std::string str = "Housework";

			REQUIRE(asc::StringHelper::startsWith(str, "House"));
			REQUIRE(asc::StringHelper::startsWith(str, "Housework"));
			REQUIRE_FALSE(asc::StringHelper::startsWith(str, "work"));
		}

		TEST_CASE("endsWith works as expected", "[StringHelper]") {
			std::string str = "Housework";

			REQUIRE(asc::StringHelper::endsWith(str, "work"));
			REQUIRE(asc::StringHelper::endsWith(str, "Housework"));
			REQUIRE_FALSE(asc::StringHelper::endsWith(str, "House"));
		}

		TEST_CASE("compareCaseInsensitive works as expected", "[StringHelpers") {
			REQUIRE(asc::StringHelper::compareCaseInsensitive("", ""));
			REQUIRE(asc::StringHelper::compareCaseInsensitive("dog", "DoG"));
			REQUIRE(asc::StringHelper::compareCaseInsensitive("DOg", "doG"));
			REQUIRE_FALSE(asc::StringHelper::compareCaseInsensitive("DOg", "doGgie"));
		}

		TEST_CASE("ltrim works as expected", "[StringHelper]") {
			std::string str = "     \tDog";
			REQUIRE(asc::StringHelper::ltrim(str) == "Dog");
		}

		TEST_CASE("rtrim works as expected", "[StringHelper]") {
			std::string str = "Dog     \t";
			REQUIRE(asc::StringHelper::rtrim(str) == "Dog");
		}

		TEST_CASE("trim works as expected", "[StringHelper]") {
			std::string str = "         \tDog     \t";
			REQUIRE(asc::StringHelper::trim(str) == "Dog");
		}

		TEST_CASE("splitStringByString works as expected", "[StringHelpers]") {
			std::string splitString = "a ga ";
			std::vector<std::string> stringComponents = { "part1", "part2", "part3", "part4", "part5", "part6", "pasdasdn34bn 234 " };

			std::string originalString;
			for (auto& s : stringComponents) {
				originalString += (s + splitString);
			}

			auto result = asc::StringHelper::splitStringByString(originalString, splitString);

			CHECK(result.size() == stringComponents.size());

			for (unsigned int i = 0; i < std::min(result.size(), stringComponents.size()); i += 1) {
				CHECK(result[i] == stringComponents[i]);
			}

			REQUIRE(result.size() == stringComponents.size());
		}

		TEST_CASE("replaceAll works as expected", "[StringHelpers]") {
			std::string originalString = "a ga ";
			std::string replacedString = "6523 s";
			std::vector<std::string> stringComponents = { "part1", "part2", "part3", "part4", "part5", "part6", "pasdasdn34bn 234 " };

			std::string originalComposed = originalString;
			std::string replacedComposed = replacedString;
			for (auto& s : stringComponents) {
				originalComposed += (s + originalString);
				replacedComposed += (s + replacedString);
			}

			asc::StringHelper::replaceAll(originalComposed, originalString, replacedString);

			REQUIRE(originalComposed == replacedComposed);
		}

		TEST_CASE("replaceAll works as expected if you replace and create a new match", "[StringHelper]") {
			std::string originalString = "DOG";
			std::string replacedString = "OGCATDOG";
			std::vector<std::string> stringComponents = { "____________", "______________D", "___________" };

			std::string originalComposed = originalString;
			std::string replacedComposed = replacedString;
			for (auto& s : stringComponents) {
				originalComposed += (s + originalString);
				replacedComposed += (s + replacedString);
			}

			asc::StringHelper::replaceAll(originalComposed, originalString, replacedString);

			REQUIRE(originalComposed == replacedComposed);
		}

		TEST_CASE("splitStringByDelimeters works as expected", "[StringHelpers]") {
			//static std::vector<std::string> splitStringByDelimeters(const std::string& _string, const std::vector<std::string>& _splitStrings);

			std::vector<std::string> stringComponents = { "First", "Second", "Third", "Fourth" };
			std::vector<std::string> delimeters = { "X", "Y", "AS" };

			std::string originalString = stringComponents[0];
			for (unsigned int i = 0; i < delimeters.size(); i += 1) {
				originalString += (delimeters[i] + stringComponents[i + 1]);
			}

			auto result = asc::StringHelper::splitStringByDelimeters(originalString, delimeters);

			CHECK(result.size() == stringComponents.size());

			for (unsigned int i = 0; i < std::min(result.size(), stringComponents.size()); i += 1) {
				CHECK(stringComponents[i] == result[i]);
			}

			REQUIRE(result.size() == stringComponents.size());
		}
	}
}