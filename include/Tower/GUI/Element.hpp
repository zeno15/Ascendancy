#ifndef INCLUDED_ASCENDANCY_GUI_ELEMENT_HPP_
#define INCLUDED_ASCENDANCY_GUI_ELEMENT_HPP_

#include <SFML/Graphics.hpp>

namespace asc {
	class Element : public sf::Drawable {
	public:
		Element(void);
		virtual ~Element(void);

		virtual bool handleEvent(const sf::Event& _event);
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const = 0;

		virtual void updateLayout(void);

		sf::Vector2f Position;
		sf::Vector2f Size;
		bool Visible = true;
		bool Enabled = true;
	};
}

#endif // INCLUDED_ASCENDANCY_GUI_ELEMENT_HPP_