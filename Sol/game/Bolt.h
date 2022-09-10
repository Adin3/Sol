#pragma once
#include "Entity.h"

class Bolt : public Entity {
private:
	unsigned int m_warning;
	float m_lightningTime = 1.0f;
	float m_remainingTime = 0.0f;
	float m_warningTime = 0.65f;
	int m_warningFrame = 0;
	float m_warningT = 0;
public:
	Bolt(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time);
	~Bolt();

	virtual void onCreate() override;
	virtual void onUpdate(float deltaTime) override;
};