#ifndef INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_HPP_
#define INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_HPP_

#include <Utility/Signal.hpp>
#include <EntityFramework/EntityController.hpp>
#include <EntityFramework/EntityEvent.hpp>

namespace asc {
	class EntityRepresentation;
	// TODO: Look at making this a template class, with EntityController = TController and EntityRepresentation = TRepresentation?
	class Entity {
	public:
		Entity(unsigned int _id, EntityController *_controller);
		virtual ~Entity(void);

		const unsigned int Id;

		Signal<const EntityEvent&> OnEntityEvent;

		void controllerUpdate(float _delta);
		bool controllerHandleEvent(const sf::Event& _event);

		virtual void update(float _delta) {};
		virtual bool handleEvent(const sf::Event& _event) { return false; }
		virtual EntityRepresentation *createRepresentation(void) = 0;

	protected:
		EntityController *m_Controller;
	};
}
#endif // INCLUDED_ASCENDANCY_ENTITY_FRAMEWORK_ENTITY_HPP_