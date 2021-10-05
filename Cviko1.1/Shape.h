#pragma once

#include <stdexcept>
#include <glm/vec4.hpp>
#include <memory>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/gtc/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale, glm::perspective
#include <glm/gtc/type_ptr.hpp> // glm::value_ptr

class Shape {
private:
public:
	GLuint VBO;
	GLuint VAO;
	GLuint shaderProgram;

	float* points_colors;
	float angle;
	int pointCount;
	int pointLen;
	int colorLen;

	void init();
	Shape(float* points_colors, int pointLen, int colorLen, int pointCount);
	void draw();
};