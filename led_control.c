#include "pico/stdlib.h"
#include "led_control.h"
#include <stdio.h>

void setup() {
    // Initialize the LED GPIO pins as outputs
    gpio_init(LED1_PIN);
    gpio_set_dir(LED1_PIN, GPIO_OUT);

    gpio_init(LED2_PIN);
    gpio_set_dir(LED2_PIN, GPIO_OUT);

    gpio_init(LED3_PIN);
    gpio_set_dir(LED3_PIN, GPIO_OUT);

    // Ensure all LEDs are off initially
    gpio_put(LED1_PIN, 0);
    gpio_put(LED2_PIN, 0);
    gpio_put(LED3_PIN, 1);  // Turn off the Blue LED (assuming active-low)
}

void led_sequence() {
    // Print for debugging
    printf("Starting LED sequence...\n");

    // 5-second delay with all LEDs off
    sleep_ms(5000);

    // First sequence: Red LED on for 1 second
    gpio_put(LED1_PIN, 1);   // Red LED on
    sleep_ms(1000);
    gpio_put(LED1_PIN, 0);   // Red LED off
    sleep_ms(50);

    // Green LED on for 1 second
    gpio_put(LED2_PIN, 1);   // Green LED on
    sleep_ms(1000);
    gpio_put(LED2_PIN, 0);   // Green LED off
    sleep_ms(50);

    // Blue LED on for 1 second (active-low)
    gpio_put(LED3_PIN, 0);   // Blue LED on
    sleep_ms(1000);
    gpio_put(LED3_PIN, 1);   // Blue LED off
    sleep_ms(250);

    // All LEDs on for 2 seconds
    gpio_put(LED1_PIN, 1);   // Red LED on
    gpio_put(LED2_PIN, 1);   // Green LED on
    gpio_put(LED3_PIN, 0);   // Blue LED on
    sleep_ms(2000);
    
    // Turn off all LEDs
    gpio_put(LED1_PIN, 0);   // Red LED off
    gpio_put(LED2_PIN, 0);   // Green LED off
    gpio_put(LED3_PIN, 1);   // Blue LED off
}
