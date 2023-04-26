#ifndef SOFTWARESWITCH_H
#define SOFTWARESWITCH_H

#include "RoveSwitch.h"


class SoftwareSwitch : public RoveSwitch {

private:

	bool m_pressed = false;

public:

	/**
	 * @brief Construct a new SoftwareSwitch object.
	 * 
	 */
	SoftwareSwitch() {}

	/**
	 * @brief Set the value returned when read, before invert is applied.
	 * 
	 */
	void set(const bool& pressed);

    /**
     * @brief Read the current value of the switch, as determined by set().
     * 
     * @return Whether the switch is tripped.
     */
	bool read() const;

};


#endif