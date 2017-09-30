#ifndef INCLUDED_ASCENDANCY_GAME_ENTITIES_TOWER_HPP_
#define INCLUDED_ASCENDANCY_GAME_ENTITIES_TOWER_HPP_

#include <EntityFramework.hpp>

namespace asc {
	class Tower : public Entity {
	public:
		Tower(unsigned int _id, EntityController *_controller, EntityResource *_resource);
		~Tower(void);

		virtual void update(float _delta) override;

		virtual EntityRepresentation *createRepresentation(void) override;

	private:
		EntityResource *m_EntityResource;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_ENTITIES_TOWER_HPP_