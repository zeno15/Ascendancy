#include <Infrastructure.hpp>

#include <Scenes/HexTestScene.hpp>
#include <Scenes/IntegrationTestScene.hpp>

int main() {

	asc::Application::getInstance().initialise();
	asc::Application::getSceneManager().pushScene(new asc::IntegrationTestScene());
	asc::Application::getInstance().start();
	delete asc::Application::getSceneManager().popScene();

	asc::Application::getInstance().initialise();
	asc::Application::getSceneManager().pushScene(new asc::HexTestScene());
	asc::Application::getInstance().start();
	delete asc::Application::getSceneManager().popScene();

	return EXIT_SUCCESS;
}