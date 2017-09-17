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
	
    ${CMAKE_SOURCE_DIR}/test/Utility/SignalTests.cpp
    ${CMAKE_SOURCE_DIR}/test/Utility/StringHelpersTests.cpp
    ${CMAKE_SOURCE_DIR}/test/Utility/XMLTests.cpp
)

# Integration Test
SET(INTEGRATION_TEST_SOURCE_FILES ${INTEGRATION_TEST_SOURCE_FILES}
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Controllers/BasicAIController.hpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Controllers/BasicController.hpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Controllers/BasicKeyboardController.hpp

	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Entities/BasicBallEntity.hpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Resources/BasicBallResource.hpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Representations/BasicBallRepresentation.hpp
	 	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/include/Scenes/IntegrationTestScene.hpp	 
)
SET(INTEGRATION_TEST_HEADER_FILES ${INTEGRATION_TEST_HEADER_FILES}
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Controllers/BasicAIController.cpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Controllers/BasicController.cpp
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Controllers/BasicKeyboardController.cpp

	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Entities/BasicBallEntity.cpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Resources/BasicBallResource.cpp
	 
	 ${CMAKE_SOURCE_DIR}/test/Integration/src/Representations/BasicBallRepresentation.cpp

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