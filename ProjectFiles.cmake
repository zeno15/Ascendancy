# Entity Framework
SET(ENTITY_FRAMEWORK_HEADER_FILES ${ENTITY_FRAMEWORK_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/EntityFramework/Entity.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityEvent.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityManager.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityRepresentation.hpp
	${CMAKE_SOURCE_DIR}/include/EntityFramework/EntityRepresentationManager.hpp

	${CMAKE_SOURCE_DIR}/include/EntityFramework.hpp
)
SET(ENTITY_FRAMEWORK_SOURCE_FILES ${ENTITY_FRAMEWORK_SOURCE_FILES}
	${CMAKE_SOURCE_DIR}/src/EntityFramework/Entity.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityManager.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityRepresentation.cpp
	${CMAKE_SOURCE_DIR}/src/EntityFramework/EntityRepresentationManager.cpp
)

# Infrastructure
SET(INFRASTRUCURE_HEADER_FILES ${INFRASTRUCURE_HEADER_FILES}
	${CMAKE_SOURCE_DIR}/include/Infrastructure.hpp
)
SET(INFRASTRUCTURE_SOURCE_FILES ${INFRASTRUCTURE_SOURCE_FILES}
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