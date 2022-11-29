// #include "gameManager.h"
// #include <GLFW/glfw3.h>

// GameManager::GameManager()
// {
// 	// Initialized GLFW
// 	if (glfwInit())
// 	{
// 		std::cout << "GLFW initialized successfully" << std::endl;

// 		// Create the display manager (pointers must be deleted)
// 		m_displayManager = new DisplayManager(1280, 720, "ThinMatrix OpenGL Game");

// 		// Initialize glew using experimental(new)
// 		glewExperimental = true;
// 		GLenum status = glewInit();
// 		if (status == GLEW_OK)
// 		{
// 			std::cout << "GLEW initialized successfully" << std::endl;
// 		}
// 		else
// 		{
// 			std::cerr << "ERROR: GLEW failed to initialize \n" << glewGetErrorString(status) << std::endl;
// 		}
// 	}
// 	else
// 	{
// 		std::cerr << "ERROR: GLFW failed to initialize" << std::endl;
// 	}
// }


// GameManager::~GameManager()
// {
// 	// Delete the display and clean up GLFW
// 	delete m_displayManager;
// 	glfwTerminate();
// }

// void GameManager::startGame()
// {
// 	std::cout << "Running main game loop" << std::endl;

// 	// Start the game loop
// 	while (m_displayManager->isWindowOpen())
// 	{
//         // game logic
//         // render scene

//         // Display
// 		m_displayManager->updateDisplay();
// 	}
// }