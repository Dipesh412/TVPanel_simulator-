#include "TVPanel.h"
#include "InputManager.h"
#include "AudioManager.h"
#include "SettingsManager.h"
#include "UIManager.h"
#include <iostream>
#include <string>

int main() {
    TVPanel tv;
    InputManager inputManager;
    AudioManager audioManager;
    SettingsManager settingsManager;

    int choice;

    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: // Power On
            tv.powerOn();
            break;

        case 2: // Power Off
            tv.powerOff();
            break;

        case 3: { // Switch Input
            if (tv.getState() == ACTIVE) {
                std::string input;
                std::cout << "Enter input (HDMI/USB/AV): ";
                std::cin >> input;
                inputManager.switchInput(input);
            } else {
                std::cout << "TV is OFF. Please turn it ON first.\n";
            }
            break;
        }

        case 4: // Increase Volume
            if (tv.getState() == ACTIVE) {
                audioManager.increaseVolume();
            } else {
                std::cout << "TV is OFF. Please turn it ON first.\n";
            }
            break;

        case 5: // Decrease Volume
            if (tv.getState() == ACTIVE) {
                audioManager.decreaseVolume();
            } else {
                std::cout << "TV is OFF. Please turn it ON first.\n";
            }
            break;

        case 6: // Mute/Unmute
            if (tv.getState() == ACTIVE) {
                audioManager.mute();
            } else {
                std::cout << "TV is OFF. Please turn it ON first.\n";
            }
            break;

        case 7: { // Adjust Brightness
            if (tv.getState() == ACTIVE) {
                int brightness;
                std::cout << "Enter brightness (0-100): ";
                std::cin >> brightness;
                settingsManager.adjustBrightness(brightness);
            } else {
                std::cout << "TV is OFF. Please turn it ON first.\n";
            }
            break;
        }

        case 8: { // Adjust Contrast
            if (tv.getState() == ACTIVE) {
                int contrast;
                std::cout << "Enter contrast (0-100): ";
                std::cin >> contrast;
                settingsManager.adjustContrast(contrast);
            } else {
                std::cout << "TV is OFF. Please turn it ON first.\n";
            }
            break;
        }

        case 9: // Exit
            std::cout << "Exiting the simulator...\n";
            break;

        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}
