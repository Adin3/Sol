#include "Bolt.h"

Bolt::Bolt(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time) : Entity(sprite, position, size, frames, frame, maxTime, time)
{
	m_warning = TextureManager::LoadTexture("img/warninglight.png");
	u_size.x = 100.0f;
	u_size.y = 100.0f;
}

Bolt::~Bolt()
{

}

void Bolt::onCreate()
{

}

void Bolt::onUpdate(float deltaTime)
{
	if (m_remainingTime < m_warningTime)
		Renderer::CreateQuad(u_size, u_position, m_warning, 3, m_warningFrame, 0.2f, m_warningT, deltaTime);
	else
		if (m_remainingTime < m_lightningTime) {
			u_size = { 160.0f, 1000.0f };
			u_position.y = 510.0f;
			Renderer::CreateQuad(u_size, u_position, u_sprite, u_maxFrames, u_frame, u_maxTime, u_time, deltaTime);
		}
		else u_health = 0.0f;

	m_remainingTime += deltaTime;
}