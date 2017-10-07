#include <Game/LevelInteraction.hpp>

#include <Game/Level.hpp>

#include <Infrastructure/Application.hpp>

#include <iostream>

namespace asc {

	LevelInteraction::LevelInteraction(const Level& _level) :
		m_Level(_level),
		m_PlacingTower(false) {

	}

	bool LevelInteraction::handleEvent(const sf::Event& _event) {
		if (_event.type == sf::Event::KeyPressed) {
			if (_event.key.code == sf::Keyboard::F1) {
				m_PlacingTower = true;
				m_TowerType = "BasicTower"; // Corresponds to resource name in data access manager
				return true;
			}
		}
		if (_event.type == sf::Event::MouseButtonPressed) {
			if (_event.mouseButton.button == sf::Mouse::Left) {
				auto gameCoords = Application::convertEventCoordsToGameCoords(sf::Vector2i(_event.mouseButton.x, _event.mouseButton.y));

				if (!m_PlacingTower) {
					OnMouseButtonPressed.invoke(gameCoords);
					return true;
				}

				sf::Vector2i tileCoords = m_Level.gameCoordsToLevelTileCoords(gameCoords);

				if (tileCoords.x < 0 || tileCoords.x >= static_cast<int>(m_Level.m_Width) ||
					tileCoords.y < 0 || tileCoords.y >= static_cast<int>(m_Level.m_Height)) {
					// Outside of level bounds
					return false;
				}

				OnTowerPlaced.invoke(tileCoords, m_TowerType);

				return true;
			}
		}
		return false;
	}

}