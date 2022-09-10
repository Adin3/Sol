#include "Spawner.h"

int winX, winY;

Spawner::Spawner()
{
	srand((unsigned)time(NULL));
	m_boltSprite = TextureManager::LoadTexture("img/bolt.png");
	m_stormSprite = TextureManager::LoadTexture("img/storm.png");
	m_rainSprite = TextureManager::LoadTexture("img/rain.png");
	Entity::levelDone = false;
}
Spawner::~Spawner()
{
	//m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 950.0f), 3, 0, 0.2f, 0.0f);
	//EntityManager::addEntity(m_rain);
	//EntityManager::pushEnemies(m_rain);
	// 
	//oneInstance->at(m_indexSeconds - 1) = false;
	//m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(385.0f, 385.0f), 3, 0, 0.2f, 0.0f);
	//EntityManager::addEntity(m_bolt);
	//EntityManager::pushEnemies(m_bolt);
	// 
	//oneInstance->at(m_indexSeconds - 1) = false;
	//m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
	//EntityManager::addEntity(m_storm);
	//EntityManager::pushStorm(m_storm);
	// 
	//oneInstance->at(m_indexSeconds - 1) = false;
	//m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
	//EntityManager::addEntity(m_storm);
	//EntityManager::pushStorm(m_storm);
	
}

void Spawner::Level1(float deltaTime)
{
	if (musicEnable == false) {
		AudioManager::Play("audio/song1.mp3", false); musicEnable = true;
	}

	switch (m_indexSeconds)
	{
		case 1:
			if (oneInstance->at(m_indexSeconds-1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 22:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 45:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 67:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 90:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 101:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 112:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 123:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 400.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 134:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 137:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 140:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 143:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 146:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 149:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 152:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 156:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 180:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 183:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 187:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 192:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 195:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 199:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 204:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 208:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 211:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 216:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 220:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 224:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 228:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 232:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 236:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 240:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 244:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 248:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 253:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 256:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 260:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 265:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 268:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 272:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 278:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 281:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 285:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 289:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 293:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 296:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 301:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 304:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 308:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 314:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 317:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 321:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 326:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 329:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 333:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 338:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 341:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 345:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 350:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 354:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 358:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 362:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 366:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 370:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 375:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 377:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 382:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 387:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 390:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 394:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 399:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 403:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 406:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 411:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 415:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 419:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 423:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 427:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 431:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 435:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 439:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 443:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 448:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 451:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 455:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 460:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 464:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 468:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 472:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 476:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 480:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 484:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 488:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 492:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 496:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 500:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 504:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 508:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 512:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 516:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 521:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 525:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 529:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 533:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 537:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 541:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 545:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 549:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 553:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 557:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 561:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 565:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 570:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
				EntityManager::addEntity(m_rain);
				EntityManager::pushEnemies(m_rain);
				oneInstance->at(m_indexSeconds - 1) = false;
			}
			break;
		case 605:
			if (oneInstance->at(m_indexSeconds - 1) == true) {
				Entity::levelDone = true;
			}
			break;
		default:
			break;
	}

	if (m_timer > 0.1f) {
		m_indexSeconds++;
		m_timer = 0.0f;
		oneInstance->push_back(true);
	}
	m_timer += deltaTime;
}

void Spawner::Level2(float deltaTime)
{
	if (musicEnable == false) {
		AudioManager::Play("audio/song2.mp3", false); musicEnable = true;
	}

	switch (m_indexSeconds)
	{
	case 1:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 13:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 26:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 39:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 42:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 52:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 65:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 78:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 91:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 94:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 104:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 108:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 117:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 130:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 143:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 146:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 156:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 160:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 169:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 182:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 195:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 198:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 208:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 212:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 221:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 234:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 238:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 247:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 250:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 260:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 264:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 273:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 277:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 286:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 290:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 299:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 302:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 311:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 314:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 315:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 317:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 320:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 323:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 326:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 327:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 329:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 332:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 335:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 338:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 341:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 344:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 347:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 350:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 353:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 356:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 359:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 362:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 365:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 368:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 363:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 371:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 374:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 375:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 377:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 380:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 383:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 386:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 389:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 392:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 395:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 398:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 401:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 404:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 407:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 410:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 411:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 413:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 416:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 419:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 422:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 423:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 425:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 428:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 431:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 434:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 437:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 440:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 443:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 446:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 449:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 452:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 455:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 458:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 459:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 461:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 464:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 467:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 470:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 471:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 473:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 476:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 479:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 482:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 485:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 488:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 491:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 494:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 497:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 500:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 506:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 519:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 532:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 545:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 548:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 558:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 571:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 584:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 597:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 600:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 615:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			Entity::levelDone = true;
		}
	}

	if (m_timer > 0.1f) {
		m_indexSeconds++;
		m_timer = 0.0f;
		oneInstance->push_back(true);
	}
	m_timer += deltaTime;
}
void Spawner::Level3(float deltaTime)
{
	if (musicEnable == false) {
		AudioManager::Play("audio/song3.mp3", false); musicEnable = true;
	}

	switch (m_indexSeconds)
	{
	case 1:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 28:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 56:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 84:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 112:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 124:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 127:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 140:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 152:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 155:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 168:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 180:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 183:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 196:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 208:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 211:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 214:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 217:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 220:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 223:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 226:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 229:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 232:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 235:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 238:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 241:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 244:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 247:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 250:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 253:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 256:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 259:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 262:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 265:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 268:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 271:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 274:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 277:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 280:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 283:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 285:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 288:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 290:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 296:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 298:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 304:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 306:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 312:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 314:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 320:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 322:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 328:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 332:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 344:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(640.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 350:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 352:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 358:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 360:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 366:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 368:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 374:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 376:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 382:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 384:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 390:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 560.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 398:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			oneInstance->at(m_indexSeconds - 1) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 435:
		if (oneInstance->at(m_indexSeconds - 1) == true) {
			Entity::levelDone = true;
		}
		break;
	}

	if (m_timer > 0.1f) {
		m_indexSeconds++;
		m_timer = 0.0f;
		oneInstance->push_back(true);
	}

	m_timer += deltaTime;
}
void Spawner::Level4(float deltaTime)
{
	if (musicEnable == false) {
		AudioManager::Play("audio/song4.mp3", false); musicEnable = true;
		m_indexSeconds = -1; glfwSetWindowPos(Application::GetWindow(), 500, 25);
	}

	switch (m_indexSeconds)
	{
	case 1:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 4:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 9:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 13:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 18:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 22:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 27:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 31:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 36:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 40:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 45:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(480.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 49:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 54:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 58:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 63:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 67:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 72:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 76:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 81:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 85:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 90:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 94:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 99:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 103:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 108:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 112:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 117:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 121:
		if (oneInstance->at(m_indexSeconds) == true) {
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 126:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 130:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 135:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 139:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 144:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 148:
		if (oneInstance->at(m_indexSeconds) == true) {
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 153:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 157:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 162:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 166:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 171:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 175:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 180:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 184:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 189:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 193:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 198:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 202:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 207:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 210:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 211:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 216:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 220:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 224:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(100.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 225:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 229:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 234:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 237:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 238:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 243:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 247:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 249:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(-160.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 252:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 256:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 261:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 265:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 270:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 274:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 279:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
		
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 283:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 288:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;

			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 292:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 297:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 301:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 306:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 310:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 314:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 318:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 319:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 324:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 328:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 332:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(280.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 337:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 341:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 345:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_bolt = std::make_shared<Bolt>(m_boltSprite, glm::vec2(160.0f, 160.0f), glm::vec2(460.0f, 945.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_bolt);
			EntityManager::pushEnemies(m_bolt);
		}
		break;
	case 346:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 350:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 355:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 357:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_storm = std::make_shared<Storm>(m_stormSprite, glm::vec2(20.0f, 160.0f), glm::vec2(880.0f, 100.0f), 3, 0, 0.2f, 0.0f);
			EntityManager::addEntity(m_storm);
			EntityManager::pushStorm(m_storm);
		}
		break;
	case 359:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 364:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 368:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 373:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 377:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 382:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 386:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 391:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 395:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 399:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(640.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 404:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			glfwSetWindowPos(Application::GetWindow(), 1200 - winX, 200 - winY);
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 408:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 413:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 417:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(460.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 421:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(280.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 426:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			m_rain = std::make_shared<Rain>(m_rainSprite, glm::vec2(180.0f, 180.0f), glm::vec2(100.0f, 1050.0f), 3, 0, 0.2f, 0.0f, 600.0f);
			EntityManager::addEntity(m_rain);
			EntityManager::pushEnemies(m_rain);
		}
		break;
	case 461:
		if (oneInstance->at(m_indexSeconds) == true) {
			oneInstance->at(m_indexSeconds) = false;
			Entity::levelDone = true;
		}
		break;
	}



	if (m_timer > 0.1f) {
		m_indexSeconds++;
		m_timer = 0.0f;
		oneInstance->push_back(true);
		winX = rand() % 900;
		winY = rand() % 400;
	}
	m_timer += deltaTime;
}

void Spawner::resetLevel(float deltatime) 
{
	m_timer = 0.0f;
	m_indexSeconds = 0;
	oneInstance->clear();
	musicEnable = false;
}