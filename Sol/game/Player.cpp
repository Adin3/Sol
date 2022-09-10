#include "Player.h"

Player::Player(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time) : Entity(sprite, position, size, frames, frame, maxTime, time)
{
	u_position.y = 90.0f;
	u_health = 2;
}

Player::~Player()
{

}

void Player::onCreate()
{
	//u_position.x = 280.0f;
}

void Player::onUpdate(float deltaTime)
{

	if(godMode == -1)
		Renderer::CreateQuad(u_size, u_position, u_sprite, u_maxFrames, u_frame, u_maxTime, u_time, deltaTime);
	else 
		Renderer::CreateQuad(u_size, u_position, u_sprite, u_maxFrames, u_frame, u_maxTime, u_time, deltaTime, {1.0f, 1.0f, 0.0f, 1.0f});

	if (Entity::hitStorm[0] == false) {
		if (Input::KeyboardInput(GLFW_KEY_D, GLFW_PRESS) && rTime > cdTime) {
			u_position.x = 100.0f;
			rTime = 0.0f;
		}
		if (Input::KeyboardInput(GLFW_KEY_F, GLFW_PRESS) && rTime > cdTime) {
			u_position.x = 280.0f;
			rTime = 0.0f;
		}
		if (Input::KeyboardInput(GLFW_KEY_J, GLFW_PRESS) && rTime > cdTime) {
			u_position.x = 460.0f;
			rTime = 0.0f;
		}
		if (Input::KeyboardInput(GLFW_KEY_K, GLFW_PRESS) && rTime > cdTime) {
			u_position.x = 640.0f;
			rTime = 0.0f;
		}
		rTime += deltaTime;
	}
	else
	{
		if (Entity::hitStorm[1] == true) {
			
			u_position.x -= deltaTime * 550.0f;
			if (u_position.x < 100.0f) {
				u_position.x = 100.0f; Entity::hitStorm[0] = false; Entity::hitStorm[1] = false;
			}
		}
		else {
			
			u_position.x += deltaTime * 550.0f;
			if (u_position.x > 640.0f) {
				u_position.x = 640.0f; Entity::hitStorm[0] = false; Entity::hitStorm[2] = false;
			}
		}
	}

	if (Input::KeyboardInput(GLFW_KEY_SPACE, GLFW_PRESS))
		godMode = -godMode;

	if (godMode == 1)
		u_isCollided = false;

	if (u_isCollided == true) {
		u_health--;
		u_isCollided = false;
	}

	if (u_health == 0)
		Entity::gameOver = true;

}