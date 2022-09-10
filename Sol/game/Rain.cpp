#include "Rain.h"

Rain::Rain(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time, float speed) : Entity(sprite, position, size, frames, frame, maxTime, time, speed)
{
	//u_position.y = 950.0f;
	//u_position.x = 280.0f;;
}

Rain::~Rain()
{

}

void Rain::onCreate()
{
	
}

void Rain::onUpdate(float deltaTime)
{
	Renderer::CreateQuad(u_size, u_position, u_sprite, u_maxFrames, u_frame, u_maxTime, u_time, deltaTime);
	u_position.y -= deltaTime * u_speed;

	if (u_isCollided == true) {
		u_health = 0.0f;
	}

	if (u_position.y < -200) u_health = 0.0f;

}