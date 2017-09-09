#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_HPP_

#include <Utility/Signal.hpp>
#include <EntityFramework/EntityEvent.hpp>

namespace asc {
	class Entity {
	public:
		Entity(unsigned int _id);
		virtual ~Entity(void);

		const unsigned int Id;

		Signal<const EntityEvent&> OnEntityEvent;

		virtual void update(float _delta) = 0;

	private:
	};
}
#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_HPP_