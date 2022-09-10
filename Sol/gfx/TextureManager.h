#pragma once
#include "Renderer.h"
#include "graphics.h"
#include <array>
#include <unordered_map>

struct Texture {
	unsigned int texture;
	int frames;
	int frame = 0;
	float maxTime;
	float curTime = 0.0f;
};

class TextureManager {

private:
	unsigned int m_whiteTexture;
	std::array<uint8_t, 32>  m_textureSlots;
	//std::array<uint8_t, 128>  m_textureSlots;

public:
	TextureManager();
	~TextureManager();
	static GLuint LoadTexture(const std::string& path);
	static std::unordered_map<std::string, GLuint> TextureCache;
};
