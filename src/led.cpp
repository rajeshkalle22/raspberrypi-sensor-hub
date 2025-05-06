#include <wiringPi.h>
#include <iostream>
#define LED_PIN 0

void initLED() {
    wiringPiSetup();
    pinMode(LED_PIN, OUTPUT);
}

void toggleLED() {
    static bool state = false;
    digitalWrite(LED_PIN, state ? HIGH : LOW);
    state = !state;
    std::cout << "LED " << (state ? "ON" : "OFF") << std::endl;
}
