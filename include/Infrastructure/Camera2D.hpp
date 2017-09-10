#ifndef INCLUDED_ASCENDANCY_INFRASTRUCTURE_CAMERA_2D_HPP_
#define INCLUDED_ASCENDANCY_INFRASTRUCTURE_CAMERA_2D_HPP_

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/View.hpp>

namespace asc {
	class Camera2D {
	public:
		Camera2D(void);
		~Camera2D(void);

		void setCenterOffset(const sf::Vector2f& _offset);
		const sf::Vector2f& getCenterOffset(void) const;

		void move(const sf::Vector2f& _offset);
		void setPosition(const sf::Vector2f& _position);
		const sf::Vector2f& getPosition(void) const;

		void zoom(float _zoom);
		void setZoom(float _zoom);
		const float getZoom(void) const;

		void setSize(const sf::Vector2f& _size);
		const sf::Vector2f& getSize(void) const;

	private:
		sf::Vector2f m_CenterOffset;
		sf::Vector2f m_Position;
		sf::Vector2f m_Size;
		float m_Zoom;
	};
}

#endif // INCLUDED_ASCENDANCY_INFRASTRUCTURE_CAMERA_2D_HPP_