#include "LimitSwitch.h"


#if defined(ARDUINO)
#include <Arduino.h>


bool LimitSwitch::read() {
	return digitalRead(m_pin) != m_inverted;
}


#endif