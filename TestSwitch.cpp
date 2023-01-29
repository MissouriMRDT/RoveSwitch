#include "TestSwitch.h"


void TestSwitch::set(const bool& pressed) {
    m_pressed = pressed;
}

bool TestSwitch::read() {
    return m_inverted != m_pressed;
}