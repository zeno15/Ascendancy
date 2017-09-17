#ifndef INCLUDED_ASCENDANCY_HEX_HEX_HPP_
#define INCLUDED_ASCENDANCY_HEX_HEX_HPP_

#include <SFML/Graphics.hpp>

namespace asc {
	class Hex : public sf::Drawable {
	public:
		Hex(int _q, int _r);
		~Hex(void);

		const int Q;
		const int R;
		const int S;

		static const float Size;

		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;

	private:
		sf::VertexArray m_VertexArray;
		sf::Text m_CoordsText;
	};
}

#endif // INCLUDED_ASCENDANCY_HEX_HEX_HPP_