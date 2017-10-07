#ifndef INCLUDED_ASCENDANCY_GAME_ENTITIES_TOWER_HPP_
#define INCLUDED_ASCENDANCY_GAME_ENTITIES_TOWER_HPP_

#include <EntityFramework.hpp>

namespace asc {
	class Level;
	class Tower : public Entity {
	public:
		Tower(unsigned int _id, EntityController *_controller, EntityResource *_resource, Level& _level);
		~Tower(void);

		virtual void update(float _delta) = 0;

		virtual EntityRepresentation *createRepresentation(void) override;

	protected:
		Level& m_Level;
		EntityResource *m_EntityResource;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_ENTITIES_TOWER_HPP_