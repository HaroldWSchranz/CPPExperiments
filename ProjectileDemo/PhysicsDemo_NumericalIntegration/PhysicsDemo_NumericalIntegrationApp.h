#pragma once

//#include "Application.h"
//#include "Renderer2D.h"
#include <glm\vec2.hpp>

class PhysicsDemo_NumericalIntegrationApp : public aie::Application {
public:

	PhysicsDemo_NumericalIntegrationApp();
	virtual ~PhysicsDemo_NumericalIntegrationApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;

	glm::vec2			m_position;
	glm::vec2			m_velocity;
};