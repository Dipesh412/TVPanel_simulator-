#include "TVPanel.h"
#include <iostream>

TVPanel::TVPanel() : currentState(STANDBY) {}

void TVPanel::powerOn() {
    if (currentState == STANDBY) {
        currentState = ACTIVE;
        std::cout << "TV is now ON.\n";
    } else {
        std::cout << "TV is already ON.\n";
    }
}

void TVPanel::powerOff() {
    if (currentState != STANDBY) {
        currentState = STANDBY;
        std::cout << "TV is now OFF.\n";
    } else {
        std::cout << "TV is already OFF.\n";
    }
}

TVState TVPanel::getState() const {
    return currentState;
}
