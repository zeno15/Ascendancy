#ifndef INCLUDED_ASCENDANCY_INFRASTRUCTURE_APPLICATION_HPP_
#define INCLUDED_ASCENDANCY_INFRASTRUCTURE_APPLICATION_HPP_

#include <SFML/Graphics.hpp>

#include <Infrastructure/FontManager.hpp>
#include <Infrastructure/SceneManager.hpp>
#include <Infrastructure/TextureManager.hpp>

namespace asc {
	class Application {
	public:
		static Application& getInstance(void) {
			static Application& app = Application();
			return app;
		}

		void initialise(void);
		void start(void);

	private:
		Application(void);
		~Application(void);

		void update(float _delta);
		void handleEvent(const sf::Event& _event);
		void render(void);

	private:
		bool m_Running;
		bool m_IsInitialised;

		sf::RenderWindow m_Window;

#ifdef _DEBUG
		sf::Text m_FPSText;
#endif

		FontManager m_FontManager;
		SceneManager m_SceneManager;
		TextureManager m_TextureManager;

	};
}

#endif // INCLUDED_ASCENDANCY_INFRASTRUCTURE_APPLICATION_HPP_