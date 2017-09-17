#include <Scenes/HexTestScene.hpp>

#include <Infrastructure/Application.hpp>
#include <Hex/HexUtility.hpp>

namespace asc {

	HexTestScene::HexTestScene(void) :
		Scene("HexTestScene"),
		isHexSelected(false),
		selectedHex(Hex::Size / 2.0f, 6),
		hoveredHex(Hex::Size / 2.0f, 6) {

		hoveredHex.setFillColor(sf::Color::Transparent);
		hoveredHex.setOutlineColor(sf::Color::White);
		hoveredHex.setOutlineThickness(-2.0f);
		hoveredHex.setOrigin(Hex::Size / 2.0f, Hex::Size / 2.0f);
		hoveredHex.rotate(30.0f);

		selectedHex.setFillColor(sf::Color::Transparent);
		selectedHex.setOutlineColor(sf::Color::Yellow);
		selectedHex.setOutlineThickness(2.0f);
		selectedHex.setOrigin(Hex::Size / 2.0f, Hex::Size / 2.0f);
		selectedHex.rotate(30.0f);

		const int size = 4;

		for (int y = -size + 1; y < size; y += 1) {
			for (int x = -size + 1; x < size; x += 1) {
				if (x < 0 && y < 0 && x + y <= -size) {
					continue;
				}
				if (x > 0 && y > 0 && x + y >= size) {
					continue;
				}

				hexes.emplace_back(x, y);
			}
		}
	}
	HexTestScene::~HexTestScene(void) {
	}

	void HexTestScene::update(float _delta) {

	}
	bool HexTestScene::handleEvent(const sf::Event& _event) {
		if (_event.type == sf::Event::MouseButtonPressed && _event.mouseButton.button == sf::Mouse::Left) {
			auto mousePosition = Application::getInstance().convertEventCoordsToGameCoords(sf::Vector2i(_event.mouseButton.x, _event.mouseButton.y));

			auto rounded = HexUtility::getQR(mousePosition.x, mousePosition.y);

			selectedHex.setPosition(HexUtility::getCenter(static_cast<float>(rounded.x), static_cast<float>(rounded.y)));

			isHexSelected = true;

			return true;
		}
		if (_event.type == sf::Event::MouseMoved) {
			auto mousePosition = Application::getInstance().convertEventCoordsToGameCoords(sf::Vector2i(_event.mouseMove.x, _event.mouseMove.y));

			auto rounded = HexUtility::getQR(mousePosition.x, mousePosition.y);

			hoveredHex.setPosition(HexUtility::getCenter(static_cast<float>(rounded.x), static_cast<float>(rounded.y)));

			return true;
		}
		if (_event.type == sf::Event::MouseButtonPressed && _event.mouseButton.button == sf::Mouse::Right) {
			isHexSelected = false;
			return true;
		}
		if (_event.type == sf::Event::KeyPressed) {
			if (_event.key.code == sf::Keyboard::Escape) {
				isHexSelected = false;
				return true;
			}
		}
		return false;
	}
	void HexTestScene::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		for (const Hex& hex : hexes) {
			_target.draw(hex, _states);
		}

		_target.draw(hoveredHex, _states);
		if (isHexSelected) {
			_target.draw(selectedHex, _states);
		}
	}
}