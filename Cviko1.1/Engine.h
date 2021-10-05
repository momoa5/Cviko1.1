#pragma once

#include <stdexcept>
#include <glm/vec4.hpp>
#include <memory>
//#include "Scene.h"
#include "Window.h"
#include "Rectangle.h"

class Engine {
private:
	Window* window;
	static Engine* instance;
	Engine();

public:
	void init();

	void startRendering();

	//virtual void onKey(int key, int scancode, int action, int mods) override;
	//virtual void onMove(double x, double y) override;
	virtual void onClick(int button, int action, double x, double y);

	Window* getWindow();

	static Engine* getInstance();

	//Scene *getScene();



};
