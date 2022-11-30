// #include "displayManager.h"

// DisplayManager::DisplayManager()
//     : m_title("No Title")
// {
//     int width = 1920;
//     int height = 1080;
//     this->m_aspect = float(width)/float(height);

//     // Set minimum OpenGL version and options
// 	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
// 	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
// 	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_FALSE);
// 	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
// 	// Needed to enable multisampling
// 	glfwWindowHint(GLFW_SAMPLES, 4);

// 	// Create OpenGL window using GLFW
// 	m_window = glfwCreateWindow(width, height, m_title.c_str(), NULL, NULL);
// 	// Check if window was created
// 	if (m_window != NULL)
// 	{
// 		std::cout << "Window created successfully" << std::endl;
// 		// Set OpenGL context to the window
// 		glfwMakeContextCurrent(m_window);
// 		// Set OpenGL viewport to full size of the window
// 		glViewport(0, 0, width, height);
// 		// Enable vertical sync
// 		glfwSwapInterval(1);
// 	}
// 	else
// 	{
// 		std::cerr << "ERROR: Failed to create glfw window" << std::endl;
// 	}
// }

// DisplayManager::DisplayManager(int width, int height, const std::string& title)
//     : m_title(title), m_aspect(float(width)/float(height))
// {
// 	// Set minimum OpenGL version and options
// 	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
// 	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
// 	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_FALSE);
// 	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
// 	// Needed to enable multisampling
// 	glfwWindowHint(GLFW_SAMPLES, 4);

// 	// Create OpenGL window using GLFW
// 	m_window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
// 	// Check if window was created
// 	if (m_window != NULL)
// 	{
// 		std::cout << "Window created successfully" << std::endl;
// 		// Set OpenGL context to the window
// 		glfwMakeContextCurrent(m_window);
// 		// Set OpenGL viewport to full size of the window
// 		glViewport(0, 0, width, height);
// 		// Enable vertical sync
// 		glfwSwapInterval(1);
// 	}
// 	else
// 	{
// 		std::cerr << "ERROR: Failed to create glfw window" << std::endl;
// 	}
// }

// DisplayManager::~DisplayManager()
// {
// 	std::cout << "Window destroyed!" << std::endl;
// 	glfwDestroyWindow(m_window);
// }

// bool DisplayManager::isWindowOpen()
// {
// 	return !glfwWindowShouldClose(this->m_window);
// }

// void DisplayManager::updateDisplay()
// {
// 	// Tell GLFW to swap buffers
// 	glfwSwapBuffers(this->m_window);
// 	// Tell GLFW to get window events
// 	glfwPollEvents();
// }

// float& DisplayManager::getAspectRatio()
// {
// 	return this->m_aspect;
// }