#include "AudioManager.h"
#include <iostream>

AudioManager::AudioManager() : volume(50), isMuted(false) {}

void AudioManager::increaseVolume() {
    if (!isMuted && volume < 100) {
        volume += 10;
        std::cout << "Volume increased to: " << volume << "\n";
    } else {
        std::cout << "Volume is already at maximum or muted.\n";
    }
}

void AudioManager::decreaseVolume() {
    if (!isMuted && volume > 0) {
        volume -= 10;
        std::cout << "Volume decreased to: " << volume << "\n";
    } else {
        std::cout << "Volume is already at minimum or muted.\n";
    }
}

void AudioManager::mute() {
    isMuted = !isMuted;
    std::cout << (isMuted ? "Muted" : "Unmuted") << "\n";
}

int AudioManager::getVolume() const {
    return isMuted ? 0 : volume;
}
