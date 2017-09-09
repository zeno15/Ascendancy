#ifndef INCLUDED_ASCENDANCE_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_MANAGER_HPP_
#define INCLUDED_ASCENDANCE_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_MANAGER_HPP_

#include <memory>
#include <vector>
#include <EntityFramework/Entity.hpp>
#include <EntityFramework/EntityRepresentation.hpp>

namespace asc {
	class EntityRepresentationManager {
	public:
		EntityRepresentationManager(void);
		~EntityRepresentationManager(void);

		void handleRegisterEntity(std::shared_ptr<Entity> _entity);
		void handleUnregisterEntity(unsigned int _id);

	private:
		std::vector<std::unique_ptr<EntityRepresentation>> m_Representations;
	};
}

#endif // INCLUDED_ASCENDANCE_ENTITY_FRAMEWORK_ENTITY_REPRESENTATION_MANAGER_HPP_