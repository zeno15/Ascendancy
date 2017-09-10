#include <Infrastructure/Camera2D.hpp>

namespace asc {
	Camera2D::Camera2D(void) :
		m_Zoom(1.0f) {

	}
	Camera2D::~Camera2D(void) {

	}

	void Camera2D::setCenterOffset(const sf::Vector2f& _offset) {
		m_CenterOffset = _offset;
	}
	const sf::Vector2f& Camera2D::getCenterOffset(void) const {
		return m_CenterOffset;
	}

	void Camera2D::move(const sf::Vector2f& _offset) {
		m_Position += _offset;
	}
	void Camera2D::setPosition(const sf::Vector2f& _position) {
		m_Position = _position;
	}
	const sf::Vector2f& Camera2D::getPosition(void) const {
		return m_Position;
	}

	void Camera2D::zoom(float _zoom) {
		m_Zoom *= _zoom;
	}
	void Camera2D::setZoom(float _zoom) {
		m_Zoom = _zoom;
	}
	const float Camera2D::getZoom(void) const {
		return m_Zoom;
	}

	void Camera2D::setSize(const sf::Vector2f& _size) {
		m_Size = _size;
	}
	const sf::Vector2f& Camera2D::getSize(void) const {
		return m_Size;
	}
}