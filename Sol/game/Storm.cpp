#include "Storm.h"

Storm::Storm(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time) : Entity(sprite, position, size, frames, frame, maxTime, time)
{
	m_warning = TextureManager::LoadTexture("img/warningstorm.png");
	if (u_position.x > 400.0f) m_direction = true;
}

Storm::~Storm()
{

}

void Storm::onCreate()
{
}

void Storm::onUpdate(float deltaTime)
{
	if (m_direction == true) {
		if (m_remainingTime < m_warningTime)
			Renderer::CreateQuad(u_size, { u_position.x - 160.0f, u_position.y }, m_warning, u_maxFrames, u_frame, 0.4f, u_time, deltaTime);
		else {
			u_size = { 160.0f, 200.0f };
			Renderer::CreateQuad(u_size, u_position, u_sprite, u_maxFrames, u_frame, u_maxTime, u_time, deltaTime);
			u_position.x -= deltaTime * 600.0f;
			if (u_position.x < -100.0f) u_health = 0.0f;
		}

		if (u_isCollided == true) {
			Entity::hitStorm[0] = true;
			Entity::hitStorm[1] = true;
		}
	}
	else {
		if (m_remainingTime < m_warningTime)
			Renderer::CreateQuad(u_size, { u_position.x + 175.0f, u_position.y }, m_warning, u_maxFrames, u_frame, 0.4f, u_time, deltaTime);
		else {
			u_size = { 160.0f, 200.0f };
			Renderer::CreateQuad(u_size, u_position, u_sprite, u_maxFrames, u_frame, u_maxTime, u_time, deltaTime);
			u_position.x += deltaTime * 600.0f;
			if (u_position.x > 840.0f) u_health = 0.0f;
		}

		if (u_isCollided == true) {
			Entity::hitStorm[0] = true;
			Entity::hitStorm[2] = true;
		}
	}

	m_remainingTime += deltaTime;
}