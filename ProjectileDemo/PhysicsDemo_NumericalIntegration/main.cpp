#include "PhysicsDemo_NumericalIntegrationApp.h"

int main() {
	
	// allocation
	auto app = new PhysicsDemo_NumericalIntegrationApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}