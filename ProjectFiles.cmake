# Entity Framework
SET(ENTITY_FRAMEWORK_HEADER_FILES ${ENTITY_FRAMEWORK_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/EntityFramework/Entity.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityController.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityEvent.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityManager.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityRepresentation.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityRepresentationManager.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityResource.hpp

	${CMAKE_SOURCE_DIR}/include/EntityFramework.hpp
)
SET(ENTITY_FRAMEWORK_SOURCE_FILES ${ENTITY_FRAMEWORK_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/EntityFramework/Entity.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityController.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityManager.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityRepresentation.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityRepresentationManager.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityResource.cpp
)

# Tower
SET(TOWER_HEADER_FILES ${TOWER_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/Tower/Level.hpp
	${CMAKE_SOURCE_DIR}/include/Tower/LevelInteraction.hpp
	${CMAKE_SOURCE_DIR}/include/Tower/Tile.hpp
	
	${CMAKE_SOURCE_DIR}/include/Tower/Controllers/SingleTargetTowerController.hpp
	
	${CMAKE_SOURCE_DIR}/include/Tower/DataAccess/DataAccessManager.hpp
	${CMAKE_SOURCE_DIR}/include/Tower/DataAccess/TowerDataAccess.hpp
	
	${CMAKE_SOURCE_DIR}/include/Tower/Entities/SingleTargetTower.hpp
	${CMAKE_SOURCE_DIR}/include/Tower/Entities/Tower.hpp

	${CMAKE_SOURCE_DIR}/include/Tower/Factory/TowerFactory.hpp

	${CMAKE_SOURCE_DIR}/include/Tower/Resources/SingleTargetTowerResource.hpp

	${CMAKE_SOURCE_DIR}/include/Tower/Representations/SingleTargetTowerRepresentation.hpp
		
	${CMAKE_SOURCE_DIR}/include/Tower/Scenes/LevelScene.hpp

	${CMAKE_SOURCE_DIR}/include/Tower.hpp
)

SET(TOWER_SOURCE_FILES ${TOWER_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/Tower/Level.cpp
	${CMAKE_SOURCE_DIR}/src/Tower/LevelInteraction.cpp
	${CMAKE_SOURCE_DIR}/src/Tower/Tile.cpp
	
	${CMAKE_SOURCE_DIR}/src/Tower/Controllers/SingleTargetTowerController.cpp
	
	${CMAKE_SOURCE_DIR}/src/Tower/DataAccess/DataAccessManager.cpp
	${CMAKE_SOURCE_DIR}/src/Tower/DataAccess/TowerDataAccess.cpp
	
	${CMAKE_SOURCE_DIR}/src/Tower/Entities/SingleTargetTower.cpp
	${CMAKE_SOURCE_DIR}/src/Tower/Entities/Tower.cpp

	${CMAKE_SOURCE_DIR}/src/Tower/Factory/TowerFactory.cpp

	${CMAKE_SOURCE_DIR}/src/Tower/Resources/SingleTargetTowerResource.cpp

	${CMAKE_SOURCE_DIR}/src/Tower/Representations/SingleTargetTowerRepresentation.cpp

	${CMAKE_SOURCE_DIR}/src/Tower/Scenes/LevelScene.cpp
)

# GUI
SET(GUI_HEADER_FILES ${GUI_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/GUI/Element.hpp
	${CMAKE_SOURCE_DIR}/include/GUI/GuiDesktop.hpp
	${CMAKE_SOURCE_DIR}/include/GUI/Panel.hpp

	${CMAKE_SOURCE_DIR}/include/GUI.hpp
)

SET(GUI_SOURCE_FILES ${GUI_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/GUI/Element.cpp
	${CMAKE_SOURCE_DIR}/src/GUI/GuiDesktop.cpp
	${CMAKE_SOURCE_DIR}/src/GUI/Panel.cpp
)

# Hex
SET(HEX_HEADER_FILES ${HEX_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/Hex/Hex.hpp
	${CMAKE_SOURCE_DIR}/include/Hex/HexUtility.hpp

	${CMAKE_SOURCE_DIR}/include/Hex.hpp
)
SET(HEX_SOURCE_FILES ${HEX_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/Hex/Hex.cpp
	${CMAKE_SOURCE_DIR}/src/Hex/HexUtility.cpp
)

# Infrastructure
SET(INFRASTRUCURE_HEADER_FILES ${INFRASTRUCURE_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/Infrastructure/Camera2D.hpp
	${CMAKE_SOURCE_DIR}/include/Infrastructure/Application.hpp
	${CMAKE_SOURCE_DIR}/include/Infrastructure/FontManager.hpp
	${CMAKE_SOURCE_DIR}/include/Infrastructure/Scene.hpp
	${CMAKE_SOURCE_DIR}/include/Infrastructure/SceneManager.hpp
	${CMAKE_SOURCE_DIR}/include/Infrastructure/TextureManager.hpp

	${CMAKE_SOURCE_DIR}/include/Infrastructure.hpp
)
SET(INFRASTRUCTURE_SOURCE_FILES ${INFRASTRUCTURE_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/Infrastructure/Camera2D.cpp
	${CMAKE_SOURCE_DIR}/src/Infrastructure/Application.cpp
	${CMAKE_SOURCE_DIR}/src/Infrastructure/FontManager.cpp
	${CMAKE_SOURCE_DIR}/src/Infrastructure/Scene.cpp
	${CMAKE_SOURCE_DIR}/src/Infrastructure/SceneManager.cpp
	${CMAKE_SOURCE_DIR}/src/Infrastructure/TextureManager.cpp
)

# Utility
SET(UTILITY_HEADER_FILES ${UTILITY_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/Utility/Signal.hpp
	${CMAKE_SOURCE_DIR}/include/Utility/StringHelpers.hpp
	${CMAKE_SOURCE_DIR}/include/Utility/XML.hpp

	${CMAKE_SOURCE_DIR}/include/Utility.hpp
)
SET(UTILITY_SOURCE_FILES ${UTILITY_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/Utility/StringHelpers.cpp
	${CMAKE_SOURCE_DIR}/src/Utility/XML.cpp
)

# Test
SET(TEST_SOURCE_FILES ${TEST_SOURCE_FILES}
    ${CMAKE_SOURCE_DIR}/test/EntityFramework/EntityManagerTests.cpp
    ${CMAKE_SOURCE_DIR}/test/EntityFramework/EntityRepresentationTests.cpp
    ${CMAKE_SOURCE_DIR}/test/EntityFramework/EntityRepresentationManagerTests.cpp
    ${CMAKE_SOURCE_DIR}/test/EntityFramework/EntityTests.cpp
	
    ${CMAKE_SOURCE_DIR}/test/Tower/DataAccess/TowerDataAccessTests.cpp
	
    ${CMAKE_SOURCE_DIR}/test/Tower/Factory/TowerFactoryTests.cpp
	
    ${CMAKE_SOURCE_DIR}/test/Utility/SignalTests.cpp
    ${CMAKE_SOURCE_DIR}/test/Utility/StringHelpersTests.cpp
    ${CMAKE_SOURCE_DIR}/test/Utility/XMLTests.cpp
)

# Integration Test
SET(INTEGRATION_TEST_HEADER_FILES ${INTEGRATION_TEST_HEADER_FILES}
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Controllers/BasicAIController.hpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Controllers/BasicController.hpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Controllers/BasicKeyboardController.hpp

	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Entities/BasicBallEntity.hpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Resources/BasicBallResource.hpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Representations/BasicBallRepresentation.hpp
	 	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Scenes/HexTestScene.hpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Scenes/IntegrationTestScene.hpp	 
)
SET(INTEGRATION_TEST_SOURCE_FILES ${INTEGRATION_TEST_SOURCE_FILES}
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Controllers/BasicAIController.cpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Controllers/BasicController.cpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Controllers/BasicKeyboardController.cpp

	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Entities/BasicBallEntity.cpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Resources/BasicBallResource.cpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Representations/BasicBallRepresentation.cpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Scenes/HexTestScene.cpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Scenes/IntegrationTestScene.cpp
)

# Global
SET(INCLUDE_FILES ${INCLUDE_FILES}
	${ENTITY_FRAMEWORK_HEADER_FILES}
	${INFRASTRUCURE_HEADER_FILES}
	${UTILITY_HEADER_FILES}
)
SET(SOURCE_FILES ${SOURCE_FILES}
	${ENTITY_FRAMEWORK_SOURCE_FILES}
	${INFRASTRUCTURE_SOURCE_FILES}
	${UTILITY_SOURCE_FILES}
)