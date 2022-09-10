#pragma once
#include "Entity.h"

class Rain : public Entity {
private:
	
public:
	Rain(unsigned int sprite, const glm::vec2& size, const glm::vec2& position, int frames, int frame, float maxTime, float time, float speed);
	~Rain();

	virtual void onCreate() override;
	virtual void onUpdate(float deltaTime) override;
};