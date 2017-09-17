#ifndef INCLUDED_ASCENDANCY_HEX_HEX_UTILITY_HPP_
#define INCLUDED_ASCENDANCY_HEX_HEX_UTILITY_HPP_

#include <SFML/System/Vector2.hpp>

namespace asc {
	class Hex;
	class HexUtility {
	public:
		static sf::Vector2f getCenter(const Hex& _hex);
		static sf::Vector2f getCenter(int _q, int _r);

		static sf::Vector2f getQR(int _mouseX, int _mouseY);
		static sf::Vector2f getQR(float _mouseX, float _mouseY);
		static sf::Vector2f getUnroundedHex(float _x, float _y);

		static sf::Vector2f getHexPoint(float _size, unsigned int _index);
	};
}

#endif // INCLUDED_ASCENDANCY_HEX_HEX_UTILITY_HPP_