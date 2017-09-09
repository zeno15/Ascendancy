#include <Infrastructure.hpp>

int main() {

	asc::Application::getInstance().initialise();

	asc::Application::getInstance().start();

	return EXIT_SUCCESS;
}