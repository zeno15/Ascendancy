#ifndef INCLUDED_ASCENDANCY_INFRASTRUCTURE_TEXTURE_MANAGER_HPP_
#define INCLUDED_ASCENDANCY_INFRASTRUCTURE_TEXTURE_MANAGER_HPP_

#include <map>

#include <SFML/Graphics.hpp>

namespace asc {
	class TextureManager {
	public:
		TextureManager();
		~TextureManager();

		bool loadTexture(const std::string& _filepath, const std::string& _textureName);
		sf::Texture& getTexture(const std::string& _textureName);

	private:
		std::map<std::string, sf::Texture *> m_Textures;
	};
}

#endif // INCLUDED_ASCENDANCY_INFRASTRUCTURE_TEXTURE_MANAGER_HPP_