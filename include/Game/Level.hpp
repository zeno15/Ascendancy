#ifndef INCLUDED_ASCENDANCY_GAME_LEVEL_HPP_
#define INCLUDED_ASCENDANCY_GAME_LEVEL_HPP_

#include <EntityFramework.hpp>

#include <Game/Tile.hpp>

namespace asc {
	class Level {
	public:
		Level(void);
		~Level(void);

		void update(float _delta);
		bool handleEvent(const sf::Event& _event);
		void draw(sf::RenderTarget& _target, sf::RenderStates _states) const;

		void createTestLevel(unsigned int _width, unsigned int _height);

	private:
		EntityManager m_EntityManager;
		EntityRepresentationManager m_EntityRepresentationManager;

		unsigned int m_EntityRepresentationManagerAddedCallbackId;
		unsigned int m_EntityRepresentationManagerRemovedCallbackId;

		std::vector<Tile> m_Tiles;

	};
}

#endif // INCLUDED_ASCENDANCY_GAME_LEVEL_HPP_