#include "pico/stdlib.h"
#include "led_control.h"
#include <stdio.h>

int main() {
    // Initialize the GPIO for the LEDs
    setup();  // Call the setup function from led_control.c

    // Initialize stdio for debugging (if needed)
    stdio_init_all();
    printf("Program started.\n");

    // Main loop: continuously run the LED sequence
    while (true) {
        led_sequence();  // Call the led sequence function
    }
}
