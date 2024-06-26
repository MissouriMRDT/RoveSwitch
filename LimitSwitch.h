#ifndef LIMITSWITCH_H
#define LIMITSWITCH_H

#include "RoveSwitch.h"

#include <cstdint>


class LimitSwitch : public RoveSwitch {

private:

	uint8_t m_pin;
	
public:

	/**
	 * @brief Construct a new LimitSwitch object.
	 * 
	 * @param pin The Arduino pin number to use.
	 * @param pullup Configure Pullup Resistor internally 
	 */
	LimitSwitch(const uint8_t& pin, bool pullup = false);

    /**
     * @brief Read the current value of the switch via Arduino digitalRead().
     * 
     * @return Whether the switch is tripped.
     */
	bool read() const;
	
};


#endif