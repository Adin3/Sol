#include "AudioManager.h"

irrklang::ISoundEngine* SoundEngine; // L-am pus acii, deoarece nu mere in private

AudioManager::AudioManager()
{
	SoundEngine = irrklang::createIrrKlangDevice();
}

void AudioManager::Play(const char* audio, bool loop)
{
	SoundEngine->play2D(audio, loop);
}

void AudioManager::Stop()
{
	SoundEngine->stopAllSounds();
}

AudioManager::~AudioManager()
{
	SoundEngine->drop();
}
