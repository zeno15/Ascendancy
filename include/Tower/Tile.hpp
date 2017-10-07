#ifndef INCLUDED_ASCENDANCY_TOWER_TILE_HPP_
#define INCLUDED_ASCENDANCY_TOWER_TILE_HPP_

namespace tower {
	class Tile {
	public:
		Tile(int _x, int _y);
		~Tile(void);

		const int X;
		const int Y;
		static const float Size;

		bool hasTower(void) const;
		int getTowerId(void) const;
		void setTowerId(int _towerId);

	private:
		int m_TowerEntityId;

	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_TILE_HPP_
