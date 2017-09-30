#ifndef INCLUDED_ASCENDANCY_GAME_SCENES_LEVEL_SCENE_HPP_
#define INCLUDED_ASCENDANCY_GAME_SCENES_LEVEL_SCENE_HPP_

#include <Infrastructure/Scene.hpp>

#include <Game/Level.hpp>

namespace asc {
	class LevelScene : public Scene {
	public:
		LevelScene(Level &_level);
		~LevelScene(void);

		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;

		Level& m_Level;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_SCENES_LEVEL_SCENE_HPP_