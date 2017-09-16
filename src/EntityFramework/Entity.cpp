#include <EntityFramework/Entity.hpp>

namespace asc {
	Entity::Entity(unsigned int _id, EntityController *_controller) :
		Id(_id),
		m_Controller(_controller) {
		m_Controller->setEntity(this);
	}

	Entity::~Entity(void) {
		OnEntityEvent.clearCallbacks();
		delete m_Controller;
	}


	void Entity::controllerUpdate(float _delta) {
		if (m_Controller != nullptr) {
			m_Controller->update(_delta);
		}
	}
	bool Entity::controllerHandleEvent(const sf::Event& _event) {
		if (m_Controller != nullptr) {
			return m_Controller->handleEvent(_event);
		}

		return false;
	}
}