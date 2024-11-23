#include "InputManager.h"
#include <iostream>

InputManager::InputManager() : currentInput("HDMI") {}

void InputManager::switchInput(const std::string &input) {
    currentInput = input;
    std::cout << "Input switched to: " << currentInput << "\n";
}

std::string InputManager::getCurrentInput() const {
    return currentInput;
}
