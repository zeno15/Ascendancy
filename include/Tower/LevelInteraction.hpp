#ifndef INCLUDED_ASCENDANCY_TOWER_LEVEL_INTERACTION_HPP_
#define INCLUDED_ASCENDANCY_TOWER_LEVEL_INTERACTION_HPP_

#include <Utility/Signal.hpp>

#include <SFML/Window/Event.hpp>

namespace tower {
	class Level;
	class LevelInteraction {
	public:
		LevelInteraction(const Level& _level);

		bool handleEvent(const sf::Event& _event);

		const Level& m_Level;

		asc::Signal<std::string> OnFunctionKeyPressed;
		asc::Signal<const sf::Vector2f&> OnMouseButtonPressed;
		asc::Signal<const sf::Vector2i&, const std::string&> OnTowerPlaced;

		bool m_PlacingTower;
		std::string m_TowerType;
	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_LEVEL_INTERACTION_HPP_
