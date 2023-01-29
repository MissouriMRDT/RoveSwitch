#ifndef TESTSWITCH_H
#define TESTSWITCH_H

#include "RoveSwitch.h"


class TestSwitch : public RoveSwitch {

private:

	bool m_pressed = false;

public:

	/**
	 * @brief Construct a new TestSwitch object.
	 * 
	 */
	TestSwitch() {}

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
	bool read();

};


#endif