#ifndef BIDIRECTIONALLIMITSWITCH_H
#define BIDIRECTIONALLIMITSWITCH_H

#include "SoftwareSwitch.h"

#include <RoveMotor.h>

#include <cstdint>


class BidirectionalLimitSwitch : public RoveSwitch{

private:

	uint8_t m_pin;
    SoftwareSwitch m_forwardSwitch, m_reverseSwitch;

    const RoveMotor* m_directionalMotor = nullptr;
	
public:

    /**
     * @brief Get a reference to the forward switch.
     * 
     * @return Reference to the forward switch.
     */
    const SoftwareSwitch& forwardSwitch() const;
    
    /**
     * @brief Get a reference to the reverse switch.
     * 
     * @return Reference to the reverse switch.
     */
    const SoftwareSwitch& reverseSwitch() const;

	/**
	 * @brief Construct a new BidirectionalLimitSwitch object.
	 * 
	 * @param pin The Arduino pin number to use.
     * @param directionalMotor A pointer to a configured RoveMotor, which determines the directional switch to trigger on interrupt.
	 */
	BidirectionalLimitSwitch(const uint8_t& pin, const RoveMotor* directionalMotor);
    
    /**
     * @brief Read the current value of the switch via Arduino digitalRead().
     * 
     * @return Whether the switch is tripped.
     */
	bool read() const;

	/**
     * @brief Handle a change in the limit switch value.
     * 
     */
    void handleInterrupt();

    /**
     * @brief Attach interrupt to the provided Arduino pin.
     * 
     * @param isr The routine to call on edge change; pass a lambda expression to handleInterrupt().
     */
    void begin(void (*isr)(void));

};


#endif