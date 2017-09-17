#include <Hex/HexUtility.hpp>

#include <Hex/Hex.hpp>

#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265f
#endif
#define ROOT_THREE_OVER_TWO (sqrtf(3.0f) / 2.0f)

namespace asc {

	sf::Vector2f HexUtility::getCenter(const Hex& _hex) {
		return getCenter(_hex.Q, _hex.R);
	}

	sf::Vector2f HexUtility::getCenter(int _q, int _r) {
		return sf::Vector2f(
			Hex::Size * (_q * 3.0f / 4.0f),
			ROOT_THREE_OVER_TWO * Hex::Size * (_r + _q / 2.0f)
		);
	}

	sf::Vector2f HexUtility::getQR(int _mouseX, int _mouseY) {
		return getQR(static_cast<float>(_mouseX), static_cast<float>(_mouseY));
	}

	sf::Vector2f HexUtility::getQR(float _mouseX, float _mouseY) {
		sf::Vector2f unrounded = getUnroundedHex(_mouseX, _mouseY);
		float q = unrounded.x;
		float r = unrounded.y;
		float s = 0.0f - q - r;

		float roundX = roundf(q);
		float roundY = roundf(r);
		float roundZ = roundf(s);

		float x_diff = fabsf(roundX - q);
		float y_diff = fabsf(roundY - r);
		float z_diff = fabsf(roundZ - s);

		if (x_diff > y_diff && x_diff > z_diff) {
			roundX = -roundY - roundZ;
		} else if (y_diff > z_diff) {
			roundY = -roundX - roundZ;
		}

		return sf::Vector2f(roundX, roundY);
	}

	sf::Vector2f HexUtility::getUnroundedHex(float _x, float _y) {
		float q = (4.0f * _x) / (3.0f * Hex::Size);
		return sf::Vector2f(
			q,
			(2.0f * _y) / (sqrtf(3.0f) * Hex::Size) - q / 2.0f
		);
	}

	sf::Vector2f HexUtility::getHexPoint(float _size, unsigned int _index) {
		const float angleDegrees = 60.0f * static_cast<float>(_index);
		const float angleRadians = M_PI / 180.0f * angleDegrees;

		return sf::Vector2f(
			_size * cosf(angleRadians) * 0.5f,
			_size * sinf(angleRadians) * 0.5f);
	}
}