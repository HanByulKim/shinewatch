#pragma once
#include "Arduino.h"
#define UARTW 0x001D

class Bluetooth{
public:
    bluetooth(){}

    void starting_connection();
    bool isConnected();

};