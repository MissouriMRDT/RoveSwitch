#ifndef ROVESWITCH_H
#define ROVESWITCH_H

class RoveSwitch {

protected:

    bool m_inverted = false;

public:

    void configInvert(bool invert);
    
    virtual bool read() = 0;

};

#endif