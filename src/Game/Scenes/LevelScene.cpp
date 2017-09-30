#include <Game/Scenes/LevelScene.hpp>

namespace asc {

	LevelScene::LevelScene(Level& _level) :
		Scene("LevelScene"),
		m_Level(_level) {

	}

	LevelScene::~LevelScene(void) {

	}


	void LevelScene::update(float _delta) {
		m_Level.update(_delta);
	}

	bool LevelScene::handleEvent(const sf::Event& _event) {
		if (m_Level.handleEvent(_event)) {
			return true;
		}

		return false;
	}

	void LevelScene::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		m_Level.draw(_target, _states);
	}

}