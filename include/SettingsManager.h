#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

class SettingsManager {
private:
    int brightness; // 0-100
    int contrast;   // 0-100

public:
    SettingsManager();
    void adjustBrightness(int value);
    void adjustContrast(int value);
    int getBrightness() const;
    int getContrast() const;
};

#endif
