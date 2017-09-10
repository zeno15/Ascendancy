#ifndef INCLUDED_ASCENDANCY_TEST_INTEGRATION_SCENES_INTEGRATION_TEST_SCENE_HPP_
#define INCLUDED_ASCENDANCY_TEST_INTEGRATION_SCENES_INTEGRATION_TEST_SCENE_HPP_

#include <EntityFramework.hpp>
#include <Infrastructure.hpp>

namespace asc {
	class IntegrationTestScene : public Scene {
	public:
		IntegrationTestScene(void);
		~IntegrationTestScene(void);

		virtual void update(float _delta) override;
		virtual bool handleEvent(const sf::Event& _event) override;
		virtual void draw(sf::RenderTarget& _target, sf::RenderStates _states) const override;

	private:
		EntityManager m_EntityManager;
		EntityRepresentationManager m_EntityRepresentationManager;

		unsigned int m_AddedCallbackId;
		unsigned int m_RemovedCallbackId;
	};
}

#endif // INCLUDED_ASCENDANCY_TEST_INTEGRATION_SCENES_INTEGRATION_TEST_SCENE_HPP_