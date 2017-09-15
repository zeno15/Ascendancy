#include <EntityFramework/Entity.hpp>

namespace asc {
	Entity::Entity(unsigned int _id, EntityController *_controller) :
		Id(_id),
		m_Controller(_controller) {
	}

	Entity::~Entity(void) {
		OnEntityEvent.clearCallbacks();
		delete m_Controller;
	}


	void Entity::controllerUpdate(float _delta) {
		m_Controller->update(_delta);
	}
	bool Entity::controllerHandleEvent(const sf::Event& _event) {
		return m_Controller->handleEvent(_event);
	}
}