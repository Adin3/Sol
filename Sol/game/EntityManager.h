#pragma once
#include <vector>
#include "Entity.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Entity;

class EntityManager {
private:
	static std::vector<std::shared_ptr<Entity>> m_Entities;
	static std::vector<std::shared_ptr<Entity>> m_Enemies;
	static std::vector<std::shared_ptr<Entity>> m_Storm;
	static std::shared_ptr<Entity> m_player;
public:
	static void addEntity(const std::shared_ptr<Entity>& entity);
	static void removeEntity(const std::shared_ptr<Entity>& entity);
	static void cleanEntity();

	static void updateEntities(float deltaTime);
	static void pushEnemies(const std::shared_ptr<Entity>& entity);
	static void pushStorm(const std::shared_ptr<Entity>& entity);
	static void pushPlayer(const std::shared_ptr<Entity>& entity);
	static void removeEnemies(const std::shared_ptr<Entity>& entity);
	static void removePlayer();
	static void cleanLowEnemies();
	static void checkForDeadEntities(std::vector<std::shared_ptr<Entity>>&);
};