#pragma once
#include "Entity.h"

class Storm : public Entity {
private:
	unsigned int m_warning;
	float m_remainingTime = 0.0f;
	float m_warningTime = 0.5f;
	bool m_direction = false;
public:
	Storm(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time);
	~Storm();

	virtual void onCreate() override;
	virtual void onUpdate(float deltaTime) override;
};