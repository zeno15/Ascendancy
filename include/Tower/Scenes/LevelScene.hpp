#ifndef INCLUDED_ASCENDANCY_TOWER_SCENES_LEVEL_SCENE_HPP_
#define INCLUDED_ASCENDANCY_TOWER_SCENES_LEVEL_SCENE_HPP_

#include <Infrastructure/Scene.hpp>

#include <Tower/Level.hpp>

namespace tower {
	class LevelScene : public asc::Scene {
	public:
		LevelScene(Level &_level);
		~LevelScene(void);

		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;

		Level& m_Level;
	};
}

#endif // INCLUDED_ASCENDANCY_TOWER_SCENES_LEVEL_SCENE_HPP_
