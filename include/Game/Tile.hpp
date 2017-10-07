#ifndef INCLUDED_ASCENDANCY_GAME_TILE_HPP_
#define INCLUDED_ASCENDANCY_GAME_TILE_HPP_

namespace asc {
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

#endif // INCLUDED_ASCENDANCY_GAME_TILE_HPP_