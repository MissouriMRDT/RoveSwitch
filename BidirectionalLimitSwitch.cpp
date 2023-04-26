#include "BidirectionalLimitSwitch.h"


const SoftwareSwitch& BidirectionalLimitSwitch::forwardSwitch() const {
    return m_forwardSwitch;
}

const SoftwareSwitch& BidirectionalLimitSwitch::reverseSwitch() const {
    return m_reverseSwitch;
}


#if defined(ARDUINO)
#include <Arduino.h>


BidirectionalLimitSwitch::BidirectionalLimitSwitch(const uint8_t& pin, const RoveMotor* directionalMotor) {
	m_pin = pin;
	pinMode(pin, INPUT);

    m_directionalMotor = directionalMotor;
}

bool BidirectionalLimitSwitch::read() const {
	return digitalRead(m_pin) != m_inverted;
}

void BidirectionalLimitSwitch::handleInterrupt() {
    if (read()) {
        int16_t last_decipercent = m_directionalMotor->lastDecipercent();
        m_forwardSwitch.set(last_decipercent > 0);
        m_reverseSwitch.set(last_decipercent < 0);
    }
    else {
        m_forwardSwitch.set(false);
        m_reverseSwitch.set(false);
    }
}

void BidirectionalLimitSwitch::begin(void (*isr)(void)) {
    attachInterrupt(digitalPinToInterrupt(m_pin), isr, CHANGE);
}


#endif