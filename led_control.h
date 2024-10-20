#ifndef LED_CONTROL_H
#define LED_CONTROL_H

// Define the GPIO pins for the LEDs
#define LED1_PIN 2  // Red LED pin
#define LED2_PIN 3  // Green LED pin
#define LED3_PIN 4  // Blue LED pin

// Function to initialize the LEDs
void setup(void);

// Function to run the LED sequence
void led_sequence(void);

#endif // LED_CONTROL_H
