#ifndef INCLUDED_ASCENDANCY_INTEGRATION_REPRESENTATIONS_BASIC_BALL_REPRESENTATION_HPP_
#define INCLUDED_ASCENDANCY_INTEGRATION_REPRESENTATIONS_BASIC_BALL_REPRESENTATION_HPP_

#include <EntityFramework/EntityRepresentation.hpp>

namespace asc {
	class BasicBallRepresentation : public EntityRepresentation {
	public:
		BasicBallRepresentation(std::shared_ptr<Entity> _entity);
		~BasicBallRepresentation(void);

		virtual void update(float _delta) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;
	};
}

#endif // INCLUDED_ASCENDANCY_INTEGRATION_REPRESENTATIONS_BASIC_BALL_REPRESENTATION_HPP_