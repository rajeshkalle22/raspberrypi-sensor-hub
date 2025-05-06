#include <iostream>

void initUART() {
    std::cout << "UART initialized (mock)" << std::endl;
}

void sendUART(const std::string& msg) {
    std::cout << "UART send: " << msg;
}
