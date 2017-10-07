#include <Infrastructure.hpp>

#include <Tower/Level.hpp>
#include <Tower/Scenes/LevelScene.hpp>

int main() {
	asc::Application::getInstance().initialise();

	tower::Level level;
	level.createTestLevel(16, 10);

	asc::Application::getSceneManager().pushScene(new tower::LevelScene(level));
	asc::Application::getInstance().start();

	return EXIT_SUCCESS;
}