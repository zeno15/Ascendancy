#include <Infrastructure.hpp>

#include <Scenes/IntegrationTestScene.hpp>

int main() {

	asc::Application::getInstance().initialise();

	asc::Application::getSceneManager().pushScene(new asc::IntegrationTestScene());

	asc::Application::getInstance().start();

	return EXIT_SUCCESS;
}