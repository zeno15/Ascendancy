#ifndef INCLUDED_ASCENDANCY_TOWER_ENTITIES_TOWER_HPP_
#define INCLUDED_ASCENDANCY_TOWER_ENTITIES_TOWER_HPP_

#include <EntityFramework.hpp>

namespace tower {
	class Level;
	class Tower : public asc::Entity {
	public:
		Tower(unsigned int _id, asc::EntityController *_controller, asc::EntityResource *_resource, Level& _level);
		~Tower(void);

		virtual void update(float _delta) = 0;

		virtual asc::EntityRepresentation *createRepresentation(void) override;

	protected:
		Level& m_Level;
		asc::EntityResource *m_EntityResource;
	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_ENTITIES_TOWER_HPP_
