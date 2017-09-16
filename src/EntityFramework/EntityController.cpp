#include <EntityFramework/EntityController.hpp>

namespace asc {
	EntityController::EntityController(void) {

	}
	EntityController::~EntityController(void) {

	}
	void EntityController::update(float _delta) {

	}
	bool EntityController::handleEvent(const sf::Event& _event) {
		return false;
	}

	void EntityController::setEntity(Entity *_entity) {
		m_Entity = _entity;
	}
}