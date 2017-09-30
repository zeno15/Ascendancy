#ifndef INCLUDED_ASCENDANCY_GAME_REPRESENTATION_SINGLE_TARGET_TOWER_REPRESENTATION_HPP_
#define INCLUDED_ASCENDANCY_GAME_REPRESENTATION_SINGLE_TARGET_TOWER_REPRESENTATION_HPP_

#include <EntityFramework.hpp>

namespace asc {
	class SingleTargetTowerRepresentation : public EntityRepresentation {
	public:
		SingleTargetTowerRepresentation(Entity *_entity);

		virtual void HandleEntityEvent(const EntityEvent& _event) override;

		virtual void update(float _delta) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_REPRESENTATION_SINGLE_TARGET_TOWER_REPRESENTATION_HPP_