#ifndef INCLUDED_ASCENDANCY_INFRASTRUCTURE_FONT_MANAGER_HPP_
#define INCLUDED_ASCENDANCY_INFRASTRUCTURE_FONT_MANAGER_HPP_

#include <map>

#include <SFML/Graphics.hpp>

namespace asc {
	class FontManager {
	public:
		FontManager();
		~FontManager();

		bool loadFont(const std::string& _filepath, const std::string& _fontName);
		sf::Font& getFont(const std::string& _fontName);

	private:
		std::map<std::string, sf::Font *> m_Fonts;

	};
}

#endif // INCLUDED_ASCENDANCY_INFRASTRUCTURE_FONT_MANAGER_HPP_