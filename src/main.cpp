#include <iostream>
#include <unistd.h>
#include "led.h"
#include "uart.h"
#include "sensor.h"

int main() {
    initLED();
    initUART();
    initSensor();

    while (true) {
        toggleLED();
        sendUART("Hello from Raspberry Pi!\n");
        readSensor();
        sleep(1);
    }

    return 0;
}
