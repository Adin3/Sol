#pragma once
#include <vector>
#include "Rain.h"
#include "Bolt.h"
#include "Storm.h"
#include "Entity.h"

class Spawner {
private:
	int m_indexSeconds = 0;
	float m_timer = 0.0f;
	bool musicEnable = false;
	std::vector<bool> oneInstance[10000];
	std::shared_ptr<Entity> m_rain;
	std::shared_ptr<Entity> m_bolt;
	std::shared_ptr<Entity> m_storm;
	unsigned int m_rainSprite;
	unsigned int m_boltSprite;
	unsigned int m_stormSprite;
public:
	Spawner();
	~Spawner();
	void Level1(float deltaTime);
	void Level2(float deltaTime);
	void Level3(float deltaTime);
	void Level4(float deltaTime);
	void resetLevel(float deltatime);
	bool levelDone[4] = { false };
};