#include "LimitSwitch.h"


#if defined(ARDUINO)
#include <Arduino.h>


LimitSwitch::LimitSwitch(const uint8_t& pin, bool pullup) {
	m_pin = pin;
	if (pullup) {
		pinMode(pin, INPUT_PULLUP);
	} else {
		pinMode(pin, INPUT);
	}
	
}

bool LimitSwitch::read() const {
	return digitalRead(m_pin) != m_inverted;
}


#endif