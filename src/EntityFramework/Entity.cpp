#include <EntityFramework/Entity.hpp>

namespace asc {
	Entity::Entity(unsigned int _id) :
		Id(_id) {
	}

	Entity::~Entity(void) {
		OnEntityEvent.clearCallbacks();
	}
}