#include "EntityManager.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Sandbox.h"
#include <algorithm>

std::vector<std::shared_ptr<Entity>> EntityManager::m_Entities;
std::vector<std::shared_ptr<Entity>> EntityManager::m_Enemies;
std::vector<std::shared_ptr<Entity>> EntityManager::m_Storm;

std::shared_ptr<Entity> EntityManager::m_player;

void EntityManager::addEntity(const std::shared_ptr<Entity>& entity)
{
	auto it = std::find(m_Entities.begin(), m_Entities.end(), entity);
	if (it == m_Entities.end())
		m_Entities.push_back(entity);
}

void EntityManager::removeEntity(const std::shared_ptr<Entity>& entity)
{
	auto it = std::find(m_Entities.begin(), m_Entities.end(), entity);
	if (it != m_Entities.end())
		m_Entities.erase(it);
}

void EntityManager::cleanEntity()
{
	m_Entities.clear();
	m_Enemies.clear();
	m_player.reset();
}

void EntityManager::updateEntities(float deltaTime)
{
	for (int i = 0; i < m_Entities.size(); i++)
	{
		if (m_Entities[i])
		{
			m_Entities[i]->onUpdate(deltaTime);
		}
	}

	for (auto& enemy : m_Enemies)
	{
		if (enemy != nullptr)
		{
			if (checkCollision(enemy, m_player))
			{
				m_player->u_isCollided = true;
				enemy->u_isCollided = true;
			}
		}
	}

	for (auto& storm : m_Storm)
	{
		if (m_player != nullptr)
		{
			if (checkCollision(storm, m_player))
			{
				storm->u_isCollided = true;
			}
		}
	}

	if (m_player)
		if (m_player->IsAlive() == true) removePlayer();
	checkForDeadEntities(m_Entities);
	checkForDeadEntities(m_Enemies);
	checkForDeadEntities(m_Storm);
}

void EntityManager::pushEnemies(const std::shared_ptr<Entity>& entity)
{
	m_Enemies.push_back(entity);
}

void EntityManager::pushStorm(const std::shared_ptr<Entity>& entity)
{
	m_Storm.push_back(entity);
}

void EntityManager::pushPlayer(const std::shared_ptr<Entity>& entity)
{
	m_player = entity;
}

void EntityManager::removeEnemies(const std::shared_ptr<Entity>& entity)
{
	auto it = std::find(m_Enemies.begin(), m_Enemies.end(), entity);
	if (it != m_Enemies.end())
		m_Enemies.erase(it);
}

void EntityManager::checkForDeadEntities(std::vector<std::shared_ptr<Entity>>& vect)
{
	vect.erase(std::remove_if(vect.begin(), vect.end(), [](const std::shared_ptr<Entity>& en)->bool {return en->IsAlive(); }), vect.end());
}

void EntityManager::removePlayer()
{
	removeEntity(m_player);
}
