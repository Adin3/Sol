#include "Sandbox.h"
#include "../misc/Input.h"


glm::vec2 pos(250.0f, 250.0f);
float logoTime = 0.0f;
bool letter = false;
float letterY = -400;
int dialogue = 0;

Sandbox::Sandbox(const char* string, const int width, const int height) 
	: Application(string, width, height)
{
	m_height = height;
	m_width = width;
	m_size = {69 , 69};
	m_dialogueSprite[1] = TextureManager::LoadTexture("img/dialogue/1.png");
	m_dialogueSprite[2] = TextureManager::LoadTexture("img/dialogue/2.png");
	m_dialogueSprite[3] = TextureManager::LoadTexture("img/dialogue/3.png");
	m_dialogueSprite[4] = TextureManager::LoadTexture("img/dialogue/4.png");
	m_dialogueSprite[5] = TextureManager::LoadTexture("img/dialogue/5.png");
	m_dialogueSprite[6] = TextureManager::LoadTexture("img/dialogue/6.png");
	m_dialogueSprite[7] = TextureManager::LoadTexture("img/dialogue/7.png");
	m_dialogueSprite[8] = TextureManager::LoadTexture("img/dialogue/8.png");
	m_dialogueSprite[9] = TextureManager::LoadTexture("img/dialogue/9.png");
	m_dialogueSprite[12] = TextureManager::LoadTexture("img/dialogue/12.png");
	m_dialogueSprite[13] = TextureManager::LoadTexture("img/dialogue/13.png");
	m_dialogueSprite[16] = TextureManager::LoadTexture("img/dialogue/16.png");
	m_dialogueSprite[17] = TextureManager::LoadTexture("img/dialogue/17.png");
	m_dialogueSprite[18] = TextureManager::LoadTexture("img/dialogue/18.png");
	m_dialogueSprite[21] = TextureManager::LoadTexture("img/dialogue/21.png");
	m_dialogueSprite[22] = TextureManager::LoadTexture("img/dialogue/22.png");
	m_dialogueSprite[23] = TextureManager::LoadTexture("img/dialogue/23.png");
	m_dialogueSprite[24] = TextureManager::LoadTexture("img/dialogue/24.png");
	m_dialogueSprite[25] = TextureManager::LoadTexture("img/dialogue/25.png");
	m_dialogueSprite[26] = TextureManager::LoadTexture("img/dialogue/26.png");
	m_dialogueSprite[27] = TextureManager::LoadTexture("img/dialogue/27.png");
	m_dialogueSprite[28] = TextureManager::LoadTexture("img/dialogue/28.png");
	m_dialogueSprite[29] = TextureManager::LoadTexture("img/dialogue/29.png");
	m_dialogueSprite[30] = TextureManager::LoadTexture("img/dialogue/30.png");
	m_dialogueSprite[31] = TextureManager::LoadTexture("img/dialogue/31.png");
	m_dialogueSprite[32] = TextureManager::LoadTexture("img/dialogue/32.png");
	m_dialogueSprite[35] = TextureManager::LoadTexture("img/dialogue/35.png");
	m_dialogueSprite[36] = TextureManager::LoadTexture("img/dialogue/36.png");
	m_dialogueSprite[37] = TextureManager::LoadTexture("img/dialogue/37.png");
	m_dialogueSprite[38] = TextureManager::LoadTexture("img/dialogue/38.png");
	m_dialogueSprite[39] = TextureManager::LoadTexture("img/dialogue/39.png");
	m_dialogueSprite[40] = TextureManager::LoadTexture("img/dialogue/40.png");
	m_dialogueSprite[41] = TextureManager::LoadTexture("img/dialogue/41.png");
	m_dialogueSprite[42] = TextureManager::LoadTexture("img/dialogue/42.png");
	m_dialogueSprite[43] = TextureManager::LoadTexture("img/dialogue/43.png");
	m_dialogueSprite[44] = TextureManager::LoadTexture("img/dialogue/44.png");
	m_dialogueSprite[45] = TextureManager::LoadTexture("img/dialogue/45.png");
	m_dialogueSprite[46] = TextureManager::LoadTexture("img/dialogue/46.png");

	m_playerSprite = TextureManager::LoadTexture("img/player.png");
	m_logo.texture = TextureManager::LoadTexture("img/logoanim4.png");
	m_logo.frames = 4;
	m_logo.maxTime = 0.2f;
	m_title.texture = TextureManager::LoadTexture("img/title.png");
	m_title.frames = 3;
	m_title.maxTime = 0.4f;
	m_enter.texture = TextureManager::LoadTexture("img/enter.png");
	m_enter.frames = 3;
	m_enter.maxTime = 0.4f;
	m_pg.texture = TextureManager::LoadTexture("img/pg1.png");
	m_pg.frames = 3;
	m_pg.maxTime = 0.2f;
	m_letter.texture = TextureManager::LoadTexture("img/letter.png");
	m_letter.frames = 3;
	m_letter.maxTime = 0.2f;
	m_lv1.texture = TextureManager::LoadTexture("img/lv1.png");
	m_lv1.frames = 3;
	m_lv1.maxTime = 0.2f;
	m_lv2.texture = TextureManager::LoadTexture("img/lv2.png");
	m_lv2.frames = 3;
	m_lv2.maxTime = 0.2f;
	m_lv3.texture = TextureManager::LoadTexture("img/lv3.png");
	m_lv3.frames = 3;
	m_lv3.maxTime = 0.2f;
	m_lv4.texture = TextureManager::LoadTexture("img/lv4.png");
	m_lv4.frames = 3;
	m_lv4.maxTime = 0.2f;
	m_sun.texture = TextureManager::LoadTexture("img/sun.png");
	m_sun.frames = 3;
	m_sun.maxTime = 0.2f;
	m_state = GameState::Logo;
}

void Sandbox::onCreate()
{
	//for (int i = 1; i <= 8; i++)
	//{
	//	m_dialogueSprite[i] = TextureManager::LoadTexture("img/" + std::to_string(i) + ".png");
	//}
	m_player = std::make_shared<Player>(m_playerSprite, glm::vec2(80.0f, 110.0f), glm::vec2(385.0f, 385.0f), 3, 0, 0.2f, 0.0f);
	EntityManager::addEntity(m_player);
	EntityManager::pushPlayer(m_player);

	m_spawner = std::make_shared<Spawner>();
	Entity::gameOver = false;
}

void Sandbox::onUpdate(float deltaTime)
{
	switch(m_state) {
	case GameState::Logo:
		Renderer::CreateQuad({ 500.0f, 500.0f }, { 385.0f, 585.0f }, m_logo.texture, m_logo.frames, m_logo.frame, m_logo.maxTime, m_logo.curTime, deltaTime);
		logoTime += deltaTime;
		if (logoTime > 3.0f) {
			m_state = GameState::MainMenu;
			AudioManager::Play("audio/menu.mp3", true);
		}
		break;
	case GameState::MainMenu:
		Renderer::CreateQuad({ 750.0f, 350.0f }, { 365.0f, 785.0f }, m_title.texture, m_title.frames, m_title.frame, m_title.maxTime, m_title.curTime, deltaTime);
		Renderer::CreateQuad({ 650.0f, 150.0f }, { 385.0f, 385.0f }, m_enter.texture, m_enter.frames, m_enter.frame, m_enter.maxTime, m_enter.curTime, deltaTime);
		if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS)) {
			m_state = GameState::Intro;
			AudioManager::Stop();
			logoTime = 0.0f;
		}
		break;
	case GameState::Intro:
		logoTime += deltaTime;
		if (logoTime > 5.0f) {
			Renderer::CreateQuad({ 650.0f, 800.0f }, { 385.0f, letterY }, m_letter.texture, m_letter.frames, m_letter.frame, m_letter.maxTime, m_letter.curTime, deltaTime);
			if (letter == false && letterY < 425.0f)
				letterY += 200 * deltaTime;
			if (letter == true)
				letterY -= 200 * deltaTime;
			if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS))
				letter = true;
			if (letterY < -600.0f) {
				m_state = GameState::BeforeLevel1;
				dialogue = 1;
			}
		}
		else Renderer::CreateQuad({ 650.0f, 350.0f }, { 370.0f, 585.0f }, m_pg.texture, m_pg.frames, m_pg.frame, m_pg.maxTime, m_pg.curTime, deltaTime);
		break;
	case GameState::BeforeLevel1:
		switch (dialogue)
		{
		case 1:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[1]);
			break;
		case 2:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[2]);
			break;
		case 3:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[3]);
			break;
		case 4:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[4]);
			break;
		case 5:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[5]);
			break;
		case 6:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[6]);
			break;
		case 7:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[7]);
			break;
		case 8:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[8]);
			break;
		case 9:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[9]);
			break;
		case 10:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_lv1.texture, m_lv1.frames, m_lv1.frame, m_lv1.maxTime, m_lv1.curTime, deltaTime);
			break;
		case 11:
			m_state = GameState::Level1;
			break;
		}
		if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS))
			dialogue++;
		break;
	case GameState::Level1:
		if (Entity::gameOver == false)
		{
			EntityManager::updateEntities(deltaTime);
			m_spawner->Level1(deltaTime);
			if (Entity::levelDone == true) {
				m_state = GameState::BeforeLevel2;
				dialogue++;
			}
		}
		else
		{
			m_spawner->resetLevel(deltaTime);
			AudioManager::Stop();
			EntityManager::cleanEntity();
			onCreate();
		}
		break;
	case GameState::BeforeLevel2:
		switch (dialogue)
		{
		case 12:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[12]);
			break;
		case 13:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[13]);
			break;
		case 14:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_lv2.texture, m_lv2.frames, m_lv2.frame, m_lv2.maxTime, m_lv2.curTime, deltaTime);
			break;
		case 15:
			m_state = GameState::Level2;
			break;
		}

		if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS))
			dialogue++;

		Entity::levelDone = false;
		m_spawner->resetLevel(deltaTime);
		break;
	case GameState::Level2:
		if (Entity::gameOver == false)
		{
			EntityManager::updateEntities(deltaTime);
			m_spawner->Level2(deltaTime);
			if (Entity::levelDone == true) {
				m_state = GameState::BeforeLevel3;
				dialogue++;
			}
		}
		else
		{
			m_spawner->resetLevel(deltaTime);
			AudioManager::Stop();
			EntityManager::cleanEntity();
			onCreate();
		}
		break;
	case GameState::BeforeLevel3:
		switch (dialogue)
		{
		case 16:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[16]);
			break;
		case 17:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[17]);
			break;
		case 18:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[18]);
			break;
		case 19:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_lv3.texture, m_lv3.frames, m_lv3.frame, m_lv3.maxTime, m_lv3.curTime, deltaTime);
			break;
		case 20:
			m_state = GameState::Level3;
			break;
		}

		if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS))
			dialogue++;

		Entity::levelDone = false;
		m_spawner->resetLevel(deltaTime);
		break;
	case GameState::Level3:
		if (Entity::gameOver == false)
		{
			EntityManager::updateEntities(deltaTime);
			m_spawner->Level3(deltaTime);
			if (Entity::levelDone == true) {
				m_state = GameState::BeforeLevel4;
				dialogue++;
			}
		}
		else
		{
			m_spawner->resetLevel(deltaTime);
			AudioManager::Stop();
			EntityManager::cleanEntity();
			onCreate();
		}
		break;
	case GameState::BeforeLevel4:
		switch (dialogue)
		{
		case 21:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[21]);
			break;
		case 22:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[22]);
			break;
		case 23:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[23]);
			break;
		case 24:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[24]);
			break;
		case 25:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[25]);
			break;
		case 26:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[26]);
			break;
		case 27:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[27]);
			break;
		case 28:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[28]);
			break;
		case 29:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[29]);
			break;
		case 30:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[30]);
			break;
		case 31:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[31]);
			break;
		case 32:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[32]);
			break;
		case 33:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_lv4.texture, m_lv4.frames, m_lv4.frame, m_lv4.maxTime, m_lv4.curTime, deltaTime);
			break;
		case 34:
			m_state = GameState::Level4;
			break;
		}

		if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS))
			dialogue++;
		Entity::levelDone = false;
		m_spawner->resetLevel(deltaTime);
		break;
	case GameState::Level4:
		if (Entity::gameOver == false)
		{
			EntityManager::updateEntities(deltaTime);
			m_spawner->Level4(deltaTime);
			if (Entity::levelDone == true) {
				m_state = GameState::End;
				dialogue++;
				glfwSetWindowPos(Application::GetWindow(), 500, 25);
			}
		}
		else
		{
			m_spawner->resetLevel(deltaTime);
			AudioManager::Stop();
			EntityManager::cleanEntity();
			onCreate();
		}
		break;
	case GameState::End:
		switch (dialogue)
		{
		case 35:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[35]);
			break;
		case 36:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[36]);
			break;
		case 37:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[37]);
			break;
		case 38:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[38]);
			break;
		case 39:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 385.0f, 585.0f }, m_dialogueSprite[39]);
			break;
		case 40:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[40]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 41:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[41]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 42:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[42]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 43:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[43]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 44:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[44]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 45:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[45]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 46:
			Renderer::CreateQuad({ 650.0f, 150.0f }, { 375.0f, 585.0f }, m_dialogueSprite[46]);
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 47:
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		case 48:
			glfwSetWindowShouldClose(Application::GetWindow(), GL_TRUE);
			break;
		default:
			Renderer::CreateQuad({ 100.0f, 100.0f }, { 675.0f, 955.0f }, m_sun.texture, m_sun.frames, m_sun.frame, m_sun.maxTime, m_sun.curTime, deltaTime);
			break;
		}

		if (Input::KeyboardInput(GLFW_KEY_ENTER, GLFW_PRESS))
			dialogue++;
		Entity::levelDone = false;
		m_spawner->resetLevel(deltaTime);
		break;
	}

	//if (GameState::Logo == m_state)
		//m_logoTime += deltaTime;
		//double posx, posy;
		//glfwGetCursorPos(Application::GetWindow(), &posx, &posy);
		//std::cout << posx << " " << posy << std::endl;
		///Renderer::CreateQuad({ 100.0f, 100.0f }, { posx, 850-posy });
		//std::cout << m_logo.curTime << " " << m_logo.frame << std::endl;
}

void Sandbox::onDestory()
{

}
