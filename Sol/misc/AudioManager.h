#pragma once
#include <iostream>
#include <irrklang/irrKlang.h>
#pragma comment(lib, "irrKlang.lib")

class AudioManager {
private:
	
public:
	AudioManager();
	~AudioManager();
	static void Play(const char* audio, bool loop);
	static void Stop();
};