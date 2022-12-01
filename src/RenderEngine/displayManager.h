#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class DisplayManager {
public:
    // Constructors/Destructor
    DisplayManager();
	DisplayManager(int width, int height, const std::string& title);
	virtual ~DisplayManager();

    bool isWindowOpen();
    void updateDisplay();
    float& getAspectRatio();
    // void  showUPS();

private:
    GLFWwindow *m_window;
    float m_aspect;
    std::string m_title;
};