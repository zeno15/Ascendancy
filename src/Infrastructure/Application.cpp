#include <Infrastructure/Application.hpp>

namespace asc {

	Application::Application(void) :
		m_Running(false),
		m_IsInitialised(false) {
	}

	Application::~Application(void) {
	}


	void Application::initialise(void) {
		m_IsInitialised = true;

		srand(static_cast<unsigned int>(time(nullptr)));

		m_Window.create(sf::VideoMode(1280, 720), "Ascendancy");
		m_Window.setVerticalSyncEnabled(true);

#ifdef _DEBUG
#ifdef WIN32_LEAN_AND_MEAN
		m_FontManager.loadFont("C:/Windows/Fonts/arial.ttf", "Arial");
#endif
#endif

	}
	void Application::start(void) {
		if (!m_IsInitialised) {
			throw std::runtime_error("Must initialise Application before starting.");
		}

#ifdef _DEBUG
		m_FPSText.setCharacterSize(16);
		m_FPSText.setFont(m_FontManager.getFont("Arial"));
		m_FPSText.setFillColor(sf::Color::Yellow);
		m_FPSText.setString("FPS: 60, UPS: 60");
#endif

		m_Running = true;

		sf::Clock clock;
		const float delta = 1.0f / 60.0f;
		float accumulator = 0.0f;
		float statsAccumulator = 0.0f;
		unsigned int fps = 0;
		unsigned int ups = 0;

		while (m_Running) {
			float frameTime = clock.restart().asSeconds();
			if (frameTime > 0.25f) {
				frameTime = 0.25f;
			}

			accumulator += frameTime;

#ifdef _DEBUG
			statsAccumulator += frameTime;

			if (statsAccumulator >= 1.0f) {
				m_FPSText.setString("FPS: " + std::to_string(fps) + ", UPS: " + std::to_string(ups));
				statsAccumulator -= 1.0f;
				fps = 0;
				ups = 0;
			}
#endif
			while (accumulator >= delta) {
				// Handle events
				sf::Event event;
				while (m_Window.pollEvent(event)) {
					handleEvent(event);
				}

				// Update
				update(delta);
				ups++;


				accumulator -= delta;
			}

			// Render
			render();
			fps++;
		}

		m_Window.close();
	}

	void Application::update(float _delta) {
		m_SceneManager.update(_delta);
	}
	void Application::handleEvent(const sf::Event& _event) {
		if (m_SceneManager.handleEvent(_event)) {
			return;
		}
		if (_event.type == sf::Event::Closed) {
			m_Running = false;
		}
	}
	void Application::render(void) {
		m_Window.clear(sf::Color::Black);

		m_SceneManager.draw(m_Window, sf::RenderStates::Default);


#ifdef _DEBUG
		m_Window.draw(m_FPSText);
#endif
		m_Window.display();
	}
}