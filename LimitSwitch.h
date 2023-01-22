#ifndef LIMITSWITCH_H
#define LIMITSWITCH_H

#include "RoveSwitch.h"

class LimitSwitch : public RoveSwitch {

private:

	int m_port;
	
public:

	LimitSwitch(int port) : m_port(port) {}

	bool read();
	
};


#endif