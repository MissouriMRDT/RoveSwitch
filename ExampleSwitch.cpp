#include "ExampleSwitch.h"


void ExampleSwitch::toggle() {
    m_pressed = !m_pressed;
}

bool ExampleSwitch::read() {
    return m_inverted != m_pressed;
}