#ifndef ROVESWITCH_H
#define ROVESWITCH_H


class RoveSwitch {

protected:

    bool m_inverted = false;

public:

    /**
     * @brief Configure whether to invert the switch value when read.
     * 
     * @param invert 
     */
    void configInvert(const bool& invert);
    
    /**
     * @brief Read the current value of the switch.
     * 
     * @return Whether the switch is tripped.
     */
    virtual bool read() = 0;

};


#endif