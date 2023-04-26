#include "LimitSwitch.h"


#if defined(ARDUINO)
#include <Arduino.h>


LimitSwitch::LimitSwitch(const uint8_t& pin) {
	m_pin = pin;
	pinMode(pin, INPUT);
}

bool LimitSwitch::read() const {
	return digitalRead(m_pin) != m_inverted;
}


#endif