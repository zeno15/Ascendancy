#ifndef INCLUDED_ASCENDANCY_INFRASTRUCTURE_APPLICATION_HPP_
#define INCLUDED_ASCENDANCY_INFRASTRUCTURE_APPLICATION_HPP_

#include <SFML/Graphics.hpp>

#include <Infrastructure/Camera2D.hpp>
#include <Infrastructure/FontManager.hpp>
#include <Infrastructure/SceneManager.hpp>
#include <Infrastructure/TextureManager.hpp>

namespace asc {
	class Application {
	public:
		static Application& getInstance(void) {
			static Application app;
			return app;
		}

		static Camera2D& getCamera(void) {
			return Application::getInstance().m_Camera;
		}
		static FontManager& getFontManager(void) {
			return Application::getInstance().m_FontManager;
		}
		static SceneManager& getSceneManager(void) {
			return Application::getInstance().m_SceneManager;
		}
		static TextureManager& getTextureManager(void) {
			return Application::getInstance().m_TextureManager;
		}

		static sf::Vector2f convertEventCoordsToGameCoords(const sf::Vector2i& _coords);
		static sf::View& getGameView(void);

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
		sf::View m_GameView;
		sf::View m_UiView;

#ifdef _DEBUG
		sf::Text m_FPSText;
#endif

		Camera2D m_Camera;
		FontManager m_FontManager;
		SceneManager m_SceneManager;
		TextureManager m_TextureManager;
	};
}

#endif // INCLUDED_ASCENDANCY_INFRASTRUCTURE_APPLICATION_HPP_