#ifndef EXAMPLESWITCH_H
#define EXAMPLESWITCH_H

#include "RoveSwitch.h"

class ExampleSwitch : public RoveSwitch {

private:

	int m_port;
	bool m_pressed = false;

public:

	ExampleSwitch(int port) : m_port(port) {}

	void toggle();
	bool read();

};


#endif