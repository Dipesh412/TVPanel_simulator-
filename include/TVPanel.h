#ifndef TVPANEL_H
#define TVPANEL_H

enum TVState { STANDBY, ACTIVE, SETTINGS };

class TVPanel {
private:
    TVState currentState;

public:
    TVPanel();
    void powerOn();
    void powerOff();
    TVState getState() const;
};

#endif
