#pragma once
#include "Entity.h"

class Player : public Entity {
private:
	float cdTime = 0.00f;
	float rTime = 0.0f;
	int godMode = -1;
public:
	Player(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time);
	~Player();

	virtual void onCreate() override;
	virtual void onUpdate(float deltaTime) override;
};