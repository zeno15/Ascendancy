#include <Game/Tile.hpp>

namespace asc {
	const float Tile::Size = 64.0f;

	Tile::Tile(int _x, int _y) :
		X(_x),
		Y(_y),
		m_TowerEntityId(0) {

	}
	Tile::~Tile(void) {

	}

	bool Tile::hasTower(void) const {
		return m_TowerEntityId > 0;
	}
	int Tile::getTowerId(void) const {
		return m_TowerEntityId;
	}
	void Tile::setTowerId(int _towerId) {
		m_TowerEntityId = _towerId;
	}
}