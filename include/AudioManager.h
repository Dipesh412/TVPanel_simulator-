#ifndef AUDIOMANAGER_H
#define AUDIOMANAGER_H

class AudioManager {
private:
    int volume; // 0-100
    bool isMuted;

public:
    AudioManager();
    void increaseVolume();
    void decreaseVolume();
    void mute();
    int getVolume() const;
};

#endif
