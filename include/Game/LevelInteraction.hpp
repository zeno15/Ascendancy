#ifndef INCLUDED_ASCENDANCY_GAME_LEVEL_INTERACTION_HPP_
#define INCLUDED_ASCENDANCY_GAME_LEVEL_INTERACTION_HPP_

#include <Utility/Signal.hpp>

#include <SFML/Window/Event.hpp>

namespace asc {
	class Level;
	class LevelInteraction {
	public:
		LevelInteraction(const Level& _level);

		bool handleEvent(const sf::Event& _event);

		const Level& m_Level;

		Signal<std::string> OnFunctionKeyPressed;
		Signal<const sf::Vector2f&> OnMouseButtonPressed;
		Signal<const sf::Vector2i&, const std::string&> OnTowerPlaced;

		bool m_PlacingTower;
		std::string m_TowerType;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_LEVEL_INTERACTION_HPP_