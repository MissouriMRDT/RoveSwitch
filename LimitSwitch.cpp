#include "LimitSwitch.h"


#if defined(ARDUINO)
#include <Arduino.h>


bool LimitSwitch::read() {
	bool val = digitalRead(m_port);
	if (m_inverted) val = !val;

	return val;
}


#endif