#ifndef INCLUDED_ASCENDANCY_GAME_LEVEL_HPP_
#define INCLUDED_ASCENDANCY_GAME_LEVEL_HPP_

#include <EntityFramework.hpp>

#include <Game/LevelInteraction.hpp>
#include <Game/Tile.hpp>

namespace asc {
	class Level {
	public:
		friend class LevelInteraction;

		Level(void);
		~Level(void);

		void update(float _delta);
		bool handleEvent(const sf::Event& _event);
		void draw(sf::RenderTarget& _target, sf::RenderStates _states) const;

		void createTestLevel(unsigned int _width, unsigned int _height);

		sf::Vector2i gameCoordsToLevelTileCoords(const sf::Vector2f& _gameCoords) const;

	private:
		void handleTowerPlaced(const sf::Vector2i& _tileCoords, const std::string& _towerName);

	private:
		unsigned int m_Width;
		unsigned int m_Height;

		EntityManager m_EntityManager;
		EntityRepresentationManager m_EntityRepresentationManager;
		LevelInteraction m_LevelInteraction;

		unsigned int m_EntityRepresentationManagerAddedCallbackId;
		unsigned int m_EntityRepresentationManagerRemovedCallbackId;
		unsigned int m_TowerPlacedCallbackId;

		std::vector<Tile> m_Tiles;
		sf::VertexArray m_TileGraphics;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_LEVEL_HPP_