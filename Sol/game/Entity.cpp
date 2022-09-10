#include "Entity.h"
#include <math.h>
#include <cmath>

bool Entity::hitStorm[3];
bool Entity::gameOver;
bool Entity::levelDone;

Entity::Entity(const std::string& string, glm::vec2 position, glm::vec2 size)
{
	u_sprite = TextureManager::LoadTexture(string.c_str());
	u_position = position;
	u_size = size;
	u_collisionMin = { u_position.x - u_size.x / 2, u_position.y + u_size.y / 2 };
	u_collisionMax = { u_position.x + u_size.x / 2, u_position.y - u_size.y / 2 };
}

Entity::Entity(unsigned int sprite, const glm::vec2& position, const glm::vec2& size, int frames, int frame, float maxTime, float time)
{
	u_sprite = sprite;
	u_position = position;
	u_size = size;
	u_maxFrames = frames;
	u_frame = frame;
	u_maxTime = maxTime;
	u_time = time;
	u_collisionMin = { u_position.x - u_size.x / 2, u_position.y + u_size.y / 2 };
	u_collisionMax = { u_position.x + u_size.x / 2, u_position.y - u_size.y / 2 };
}

Entity::Entity(unsigned int sprite, const glm::vec2& position, const glm::vec2& size, int frames, int frame, float maxTime, float time, float speed)
{
	u_sprite = sprite;
	u_position = position;
	u_size = size;
	u_maxFrames = frames;
	u_frame = frame;
	u_maxTime = maxTime;
	u_time = time;
	u_collisionMin = { u_position.x - u_size.x / 2, u_position.y + u_size.y / 2 };
	u_collisionMax = { u_position.x + u_size.x / 2, u_position.y - u_size.y / 2 };
	u_speed = speed;
}

bool checkCollision(std::shared_ptr<Entity> left, std::shared_ptr<Entity> right)
{
	left->u_collisionMin = { left->u_position.x - left->u_size.x / 2, left->u_position.y - left->u_size.y / 2 };
	left->u_collisionMax = { left->u_position.x + left->u_size.x / 2, left->u_position.y + left->u_size.y / 2 };
	right->u_collisionMin = { right->u_position.x - right->u_size.x / 2, right->u_position.y - right->u_size.y / 2 };
	right->u_collisionMax = { right->u_position.x + right->u_size.x / 2, right->u_position.y + right->u_size.y / 2 };

	//maxx1 > minx2 && minx1 < maxx2 && maxy1 > miny1 && miny1 < maxy2
	if (left->u_collisionMax.x > right->u_collisionMin.x &&
		left->u_collisionMin.x < right->u_collisionMax.x &&
		left->u_collisionMax.y > right->u_collisionMin.y &&
		left->u_collisionMin.y < right->u_collisionMax.y)
		return true;
	return false;
}

bool checkCollisionPlayer(std::shared_ptr<Entity> left, std::shared_ptr<Entity> right)
{
	left->u_collisionMin = { left->u_position.x - left->u_size.x / 2, left->u_position.y - left->u_size.y / 2 };
	left->u_collisionMax = { left->u_position.x + left->u_size.x / 2, left->u_position.y + left->u_size.y / 2 };

	//maxx1 > minx2 && minx1 < maxx2 && maxy1 > miny1 && miny1 < maxy2
	if (left->u_collisionMax.x > right->u_collisionMin.x &&
		left->u_collisionMin.x < right->u_collisionMax.x &&
		left->u_collisionMax.y > right->u_collisionMin.y &&
		left->u_collisionMin.y < right->u_collisionMax.y)
		return true;
	return false;
}