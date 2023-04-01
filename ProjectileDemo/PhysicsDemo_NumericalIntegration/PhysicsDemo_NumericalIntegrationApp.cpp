#include "PhysicsDemo_NumericalIntegrationApp.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "gl_core_4_4.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

PhysicsDemo_NumericalIntegrationApp::PhysicsDemo_NumericalIntegrationApp() {

}

PhysicsDemo_NumericalIntegrationApp::~PhysicsDemo_NumericalIntegrationApp() {

}

bool PhysicsDemo_NumericalIntegrationApp::startup() {
	
	m_2dRenderer = new aie::Renderer2D();
	m_font = new aie::Font("./font/consolas.ttf", 32);
	
	m_position = glm::vec2(100, 100);
	
	float speed = 80;
	float inclination = (float)M_PI / 3.0f;		// 45 degrees
	m_velocity = glm::vec2(speed * sin(inclination), speed * cos(inclination));
	
	return true;
}

void PhysicsDemo_NumericalIntegrationApp::shutdown() {

	delete m_font;
	delete m_2dRenderer;
}

void PhysicsDemo_NumericalIntegrationApp::update(float deltaTime) {

	// input example
	aie::Input* input = aie::Input::getInstance();

	static float timestep = 1.0;
	static float accumulatedTime = 0.0f;
	accumulatedTime += deltaTime;
		
	while (accumulatedTime >= timestep)
	{
		static float t = 0;
		static float dt = timestep;

		const glm::vec2 force = glm::vec2(0, -10);	// approximate gravity
		const float mass = 1;

		if (t <= 8)
		{
			m_position = m_position + m_velocity * dt;
			m_velocity = m_velocity + (force / mass) * dt;

			t = t + dt;

			std::cout << "\tt=" << t << ", x=" << m_position.x << ", y=" << m_position.y << std::endl;
		}

		accumulatedTime -= timestep;
	}	

	// exit the application
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
		quit();
}

void PhysicsDemo_NumericalIntegrationApp::draw() {
	
	// don't clear the screen, so we can see all frames at once
	//clearScreen();	
	glClear( GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	// begin drawing sprites
	m_2dRenderer->begin();

	// draw your stuff here!
	m_2dRenderer->setRenderColour(1, 0, 0);
	m_2dRenderer->drawCircle(m_position.x, m_position.y, 3);
	

	// calculate the real position of the projectile at various timesteps
	
	m_2dRenderer->setRenderColour(1, 1, 0);

	float speed = 80;
	float inclination = (float)M_PI / 3.0f;		// 45 degrees

	float t = 0;
	float dt = 1;
	glm::vec2 velocity = glm::vec2(speed * sin(inclination), speed * cos(inclination));
	glm::vec2 position = glm::vec2(100, 100);
	
	const glm::vec2 force = glm::vec2(0, -10);	// approximate gravity
	const float mass = 1;

	static bool bOutput = true;

	if(bOutput)
		std::cout << "Outputting positions calculated using kinematic formulas: " << std::endl;

	while (t <= 8)
	{
		float x = position.x + (velocity.x*t);
		float y = position.y + (velocity.y*t) + (0.5f*force.y*pow(t, 2));
		
		m_2dRenderer->drawCircle(x, y, 3);

		t = t + dt;

		if (bOutput)
			std::cout << "\tt=" << t << ", x=" << x << ", y=" << y << std::endl;
	}

	if (bOutput)
		std::cout << std::endl << "Outputting positions calculated using numerical integration: " << std::endl;

	bOutput = false;

	// output some text, uses the last used colour
	m_2dRenderer->drawText(m_font, "Press ESC to quit", 0, 0);

	// done drawing sprites
	m_2dRenderer->end();
}