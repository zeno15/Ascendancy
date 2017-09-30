#include <catch/catch.hpp>

#include <Utility/StringHelpers.hpp>
#include <Utility/XML.hpp>

namespace UtilityTests {
	namespace XMLTests {
		const std::string basic = R"(
<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
<Root>
</Root>)";

		const std::string basicAttributes = R"(
<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
<Root>
	<Child1 Attribute="Value"/>
	<Child2 Attribute2='Value2'>
		<Child3 />
	</Child2>
</Root>)";

		TEST_CASE("Basic single root node no children is parsed correctly.", "[XML]") {
			asc::XML xml = asc::XML();

			REQUIRE(xml.createTree(basic));

			REQUIRE(xml.getRoot()->m_Nodes.size() == 2);
			REQUIRE(xml.getRoot()->m_Nodes[0]->m_Type == asc::XML::DECLARATION);
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Type == asc::XML::ELEMENT);
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Tag == "Root");
		}

		TEST_CASE("Children with attributes", "[XML]") {
			asc::XML xml = asc::XML();

			REQUIRE(xml.createTree(basicAttributes));
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes.size() == 2);

			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[0]->m_Type == asc::XML::CLOSED_ELEMENT);
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[0]->m_Tag == "Child1");
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[0]->m_AttributePairs.size() == 1);
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[0]->m_AttributePairs[0].first == "Attribute");
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[0]->m_AttributePairs[0].second == "Value");

			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[1]->m_Type == asc::XML::ELEMENT);
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[1]->m_Tag == "Child2");
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[1]->m_AttributePairs.size() == 1);
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[1]->m_AttributePairs[0].first == "Attribute2");
			REQUIRE(xml.getRoot()->m_Nodes[1]->m_Nodes[1]->m_AttributePairs[0].second == "Value2");
		}

		TEST_CASE("Child with tag is identified and returned", "[XML]") {
			const std::string desiredTag = "Child1";
			asc::XML xml = asc::XML();
			REQUIRE(xml.createTree(basicAttributes));

			REQUIRE(xml.getRoot()->hasChildNodeWithTag(desiredTag));

			asc::XML::XMLNode *child = xml.getRoot()->getChildNodeWithTag(desiredTag);

			REQUIRE(desiredTag == child->m_Tag);
		}

		TEST_CASE("Child with attribute is identified and returned", "[XML]") {
			const std::string desiredAttribute = "Attribute";
			const std::string desiredAttributeValue = "Value";

			asc::XML xml = asc::XML();
			REQUIRE(xml.createTree(basicAttributes));

			REQUIRE(xml.getRoot()->hasChildNodeWithAttribute(desiredAttribute));

			asc::XML::XMLNode *child = xml.getRoot()->getChildNodeWithAttribute(desiredAttribute);

			REQUIRE(desiredAttributeValue == child->getAttribute(desiredAttribute));
		}
	}
}