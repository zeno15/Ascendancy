#include <Hex/Hex.hpp>

#include <Hex/HexUtility.hpp>

#include <Infrastructure/Application.hpp>

#define ROOT_THREE_OVER_TWO (std::sqrtf(3.0f) / 2.0f)
#define VERT_SIZE (Hex::Size * std::sqrtf(3.0f) / 2.0f)


namespace asc {
	const float Hex::Size = 128.0f;

	Hex::Hex(int _q, int _r) :
		Q(_q),
		R(_r),
		S(- _q - _r),
		m_VertexArray(sf::Triangles) {

		for (unsigned int i = 0; i < 6; i += 1) {
			sf::Vector2f point1 = HexUtility::getHexPoint(Size, i + 0);
			sf::Vector2f point2 = HexUtility::getHexPoint(Size, i + 1);

			m_VertexArray.append(sf::Vertex(point1, sf::Color::Green));
			m_VertexArray.append(sf::Vertex(point2, sf::Color::Green));
			m_VertexArray.append(sf::Vertex(sf::Vector2f(), sf::Color::Green));
		}

		std::string coords = std::to_string(Q) + ", " + std::to_string(R);
		m_CoordsText = sf::Text(coords, Application::getInstance().getFontManager().getFont("DEBUG"), 16);
		sf::FloatRect textRect = m_CoordsText.getLocalBounds();
		m_CoordsText.setOrigin(
			textRect.left + textRect.width / 2.0f,
			textRect.top + textRect.height / 2.0f);
	}
	Hex::~Hex(void) {

	}

	void Hex::draw(sf::RenderTarget& _target, sf::RenderStates _states) const {
		_states.transform.translate(HexUtility::getCenter(Q, R));

		_target.draw(m_VertexArray, _states);
		_target.draw(m_CoordsText, _states);
	}
}