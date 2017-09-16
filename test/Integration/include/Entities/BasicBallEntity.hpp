#ifndef INCLUDED_ASCENDANCY_INTEGRATION_ENTITIES_BASIC_BALL_ENTITY_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_ENTITIES_BASIC_BALL_ENTITY_HPP_

#include <EntityFramework/Entity.hpp>

namespace asc {
	class BasicBallEntity : public Entity {
	public:
		BasicBallEntity(unsigned int _id, EntityController *_controller);
		~BasicBallEntity(void);

		virtual void update(float _delta) override;

		virtual EntityRepresentation *createRepresentation(void) override;
		
		sf::Vector2f m_Position;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_ENTITIES_BASIC_BALL_ENTITY_HPP_