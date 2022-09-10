#pragma once
#include "../gfx/graphics.h"
#include "EntityManager.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "../misc/Input.h"

class Entity {

	friend class EntityManager;
	friend bool checkCollision(std::shared_ptr<Entity> left, std::shared_ptr<Entity> right);
	friend bool checkCollisionPlayer(std::shared_ptr<Entity> left, std::shared_ptr<Entity> right);

private:

public:
	Entity(const std::string& string, glm::vec2 position, glm::vec2 size);
	Entity(unsigned int sprite, const glm::vec2& position, const glm::vec2& size, int frames, int frame, float maxTime, float time);
	Entity(unsigned int sprite, const glm::vec2& position, const glm::vec2& size, int frames, int frame, float maxTime, float time, float speed);
	virtual void onCreate() { }
	virtual void onUpdate(float deltatime) { }
	virtual void getCollisionPos() { }
	bool IsAlive() const { return u_health <= 0; }
	static bool hitStorm[3];
	static bool gameOver;
	static bool levelDone;
protected:
	glm::vec2 u_position;
	glm::vec2 u_size;
	glm::vec2 u_collisionMax;
	glm::vec2 u_collisionMin;
	unsigned int u_sprite;
	float u_speed = 350.0f;
	bool u_isCollided = false;
	int u_health = 4;
	int u_maxFrames;
	int u_frame;
	float u_maxTime;
	float u_time;
};