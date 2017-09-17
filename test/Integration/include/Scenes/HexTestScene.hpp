#ifndef INCLUDED_ASCENDANCY_INTEGRATION_SCENES_HEX_TEST_SCENE_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_SCENES_HEX_TEST_SCENE_HPP_

#include <Infrastructure/Scene.hpp>

#include <Hex/Hex.hpp>

namespace asc {
	class HexTestScene : public Scene {
	public:
		HexTestScene(void);
		~HexTestScene(void);

		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;

	private:
		std::vector<Hex> hexes;
		bool isHexSelected;
		sf::Vector2i selectedHexCoordinates;
		sf::CircleShape hoveredHex;
		sf::CircleShape selectedHex;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_SCENES_HEX_TEST_SCENE_HPP_