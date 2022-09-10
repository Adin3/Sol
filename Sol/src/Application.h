#pragma once
#include "../gfx/graphics.h"
#include <memory>
#include <GLFW/glfw3.h>
#include "../misc/Camera.h"
#include "../misc/Input.h"
#include "../misc/AudioManager.h"
#include <string>

class Application {
private:
	float m_deltaTime = 0.0f;
	float m_lastFrame = 0.0f;
	std::string m_title;
public:
	 Application(const char* string, const int width, const int height);
	 virtual ~Application();
	 void Run();
	 void GetDeltaTime();
	 std::string ChangeTitle();
	 virtual void onCreate() { }
	 virtual void onUpdate(float deltaTime) { }
	 virtual void onDestory() { }
	 static GLFWwindow* GetWindow();
protected:
	static GLFWwindow* m_Window;
	std::shared_ptr<AudioManager> m_Audio;
	std::shared_ptr<Renderer> m_Context;
	std::shared_ptr<Camera> m_Camera;
};