#include <EntityFramework/EntityRepresentationManager.hpp>

namespace asc {
	EntityRepresentationManager::EntityRepresentationManager(void) {

	}
	EntityRepresentationManager::~EntityRepresentationManager(void) {
		m_Representations.clear();
	}


	void EntityRepresentationManager::handleRegisterEntity(std::shared_ptr<Entity> _entity) {
		m_Representations.emplace_back(std::move(std::make_unique<EntityRepresentation>(_entity)));
	}

	void EntityRepresentationManager::handleUnregisterEntity(unsigned int _id) {
		for (unsigned int i = 0; i < m_Representations.size(); i++) {
			if (m_Representations[i]->EntityId == _id) {
				m_Representations.erase(m_Representations.begin() + i);
				return;
			}
		}
	}
}