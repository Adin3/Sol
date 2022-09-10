#pragma once
#include "../gfx/graphics.h"
#include "../src/Application.h"
#include "Player.h"
#include "Entity.h"
#include "Spawner.h"

enum GameState {
	Logo = 0,
	MainMenu,
	Intro,
	BeforeLevel1,
	Level1,
	BeforeLevel2,
	Level2,
	BeforeLevel3,
	Level3,
	BeforeLevel4,
	Level4,
	End,
};

class Sandbox : public Application {
private:
	std::shared_ptr<Entity> m_player;
	std::shared_ptr<Spawner> m_spawner;
	unsigned int m_playerSprite;
	unsigned int m_dialogueSprite[100];
	int m_height;
	int m_width;
	glm::vec2 m_size;
	Texture m_logo;
	Texture m_fog;
	Texture m_title;
	Texture m_enter;
	Texture m_pg;
	Texture m_letter;
	Texture m_lv1;
	Texture m_lv2;
	Texture m_lv3;
	Texture m_lv4;
	Texture m_sun;
	GameState m_state = GameState::Logo;
public:
	Sandbox(const char* window, const int width, const int height);
	void onCreate();
	void onUpdate(float deltaTime);
	void onDestory();
	
protected:

};