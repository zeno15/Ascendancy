#include <Infrastructure.hpp>

#include <Game/Level.hpp>
#include <Game/Scenes/LevelScene.hpp>

int main() {
	asc::Application::getInstance().initialise();

	asc::Level level;
	level.createTestLevel(16, 10);

	asc::Application::getSceneManager().pushScene(new asc::LevelScene(level));
	asc::Application::getInstance().start();

	return EXIT_SUCCESS;
}