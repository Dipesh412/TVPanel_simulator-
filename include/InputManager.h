#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <string>

class InputManager {
private:
    std::string currentInput;

public:
    InputManager();
    void switchInput(const std::string &input);
    std::string getCurrentInput() const;
};

#endif
