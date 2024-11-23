#include "SettingsManager.h"
#include <iostream>
#include <algorithm> // For std::clamp

SettingsManager::SettingsManager() : brightness(50), contrast(50) {}

void SettingsManager::adjustBrightness(int value) {
    brightness = std::clamp(value, 0, 100);
    std::cout << "Brightness set to: " << brightness << "\n";
}

void SettingsManager::adjustContrast(int value) {
    contrast = std::clamp(value, 0, 100);
    std::cout << "Contrast set to: " << contrast << "\n";
}

int SettingsManager::getBrightness() const {
    return brightness;
}

int SettingsManager::getContrast() const {
    return contrast;
}
