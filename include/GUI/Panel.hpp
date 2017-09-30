#ifndef INCLUDED_ASCENDANCY_GUI_PANEL_HPP_
#define INCLUDED_ASCENDANCY_GUI_PANEL_HPP_

#include <GUI/Element.hpp>

namespace asc {
	class Panel : public Element {
	public:
		Panel(void);
		virtual ~Panel(void);

		virtual bool handleEvent(const sf::Event& _event) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const = 0;
	};
}

#endif // INCLUDED_ASCENDANCY_GUI_PANEL_HPP_