#include <Tower/Level.hpp>

#include <iostream>

#include <Tower/Entities/SingleTargetTower.hpp>
#include <Infrastructure/Application.hpp>

namespace tower {

	Level::Level(void) :
		m_LevelInteraction(*this) {

		m_EntityRepresentationManagerAddedCallbackId = m_EntityManager.OnEntityAdded.registerCallback(std::bind(
			&asc::EntityRepresentationManager::handleRegisterEntity,
			&m_EntityRepresentationManager,
			std::placeholders::_1));
		m_EntityRepresentationManagerRemovedCallbackId = m_EntityManager.OnEntityRemoved.registerCallback(std::bind(
			&asc::EntityRepresentationManager::handleUnregisterEntity,
			&m_EntityRepresentationManager,
			std::placeholders::_1));

		m_TowerPlacedCallbackId = m_LevelInteraction.OnTowerPlaced.registerCallback(std::bind(
			&Level::handleTowerPlaced,
			this,
			std::placeholders::_1,
			std::placeholders::_2));
	}

	Level::~Level(void) {
		m_EntityManager.OnEntityAdded.unregisterCallback(m_EntityRepresentationManagerRemovedCallbackId);
		m_EntityManager.OnEntityRemoved.unregisterCallback(m_EntityRepresentationManagerRemovedCallbackId);
		m_LevelInteraction.OnTowerPlaced.unregisterCallback(m_TowerPlacedCallbackId);
	}


	void Level::update(float _delta) {
		m_EntityManager.update(_delta);
		m_EntityRepresentationManager.update(_delta);
	}

	bool Level::handleEvent(const sf::Event& _event) {
		if (m_LevelInteraction.handleEvent(_event)) {
			return true;
		}
		if (m_EntityManager.handleEvent(_event)) {
			return true;
		}
		return false;
	}

	void Level::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		_target.draw(m_TileGraphics, _states);
		m_EntityRepresentationManager.draw(_target, _states);
	}

	void Level::createTestLevel(unsigned int _width, unsigned int _height) {
		m_Width = _width;
		m_Height = _height;
		m_Tiles.clear();
		m_TileGraphics = sf::VertexArray(sf::Quads, _width * _height * 4);

		for (int y = 0; y < static_cast<int>(_height); y++) {
			for (int x = 0; x < static_cast<int>(_width); x++) {

				sf::Color col = sf::Color(rand() % 255, rand() % 255, rand() % 255);

				m_Tiles.emplace_back(x, y);
				m_TileGraphics[(y * _width + x) * 4 + 0] = sf::Vertex(sf::Vector2f(Tile::Size * (static_cast<float>(x + 0)), Tile::Size * (static_cast<float>(y + 0))), col);
				m_TileGraphics[(y * _width + x) * 4 + 1] = sf::Vertex(sf::Vector2f(Tile::Size * (static_cast<float>(x + 1)), Tile::Size * (static_cast<float>(y + 0))), col);
				m_TileGraphics[(y * _width + x) * 4 + 2] = sf::Vertex(sf::Vector2f(Tile::Size * (static_cast<float>(x + 1)), Tile::Size * (static_cast<float>(y + 1))), col);
				m_TileGraphics[(y * _width + x) * 4 + 3] = sf::Vertex(sf::Vector2f(Tile::Size * (static_cast<float>(x + 0)), Tile::Size * (static_cast<float>(y + 1))), col);
			}
		}
	}
	
	sf::Vector2i Level::gameCoordsToLevelTileCoords(const sf::Vector2f& _gameCoords) const {
		sf::Vector2i tileCoords = sf::Vector2i(_gameCoords / Tile::Size);
		if (_gameCoords.x < 0.0f) {
			tileCoords.x--;
		}
		if (_gameCoords.y < 0.0f) {
			tileCoords.y--;
		}
		return tileCoords;
	}

	void Level::handleTowerPlaced(const sf::Vector2i& _tileCoords, const std::string& _towerName) {

		Tile& tile = m_Tiles[_tileCoords.y * m_Width + _tileCoords.x];

		if (tile.hasTower()) {
			std::cout << "Not placing '" << _towerName << "' at " << _tileCoords.x << ", " << _tileCoords.y << ", there is already one there" << std::endl;
			return;
		}

		std::cout << "Placing '" << _towerName << "' at " << _tileCoords.x << ", " << _tileCoords.y << std::endl;

		// TODO: Replace with tower factory? Pass in id/string code and get entity back
		static int towerId = 1;
		asc::XML xml = asc::XML();
		//xml.loadFromString(asc::Application::getDataAccessManager().getData(_towerName));
		SingleTargetTower *tower = new SingleTargetTower(towerId++, *this, xml);

		m_EntityManager.addEntity(tower);
		tile.setTowerId(tower->Id);

		m_LevelInteraction.m_PlacingTower = false;
	}
}
