#include "SoftwareSwitch.h"


void SoftwareSwitch::set(const bool& pressed) {
    m_pressed = pressed;
}

bool SoftwareSwitch::read() const {
    return m_inverted != m_pressed;
}