#include "bluetooth.h"

void Bluetooth::starting_connection(){
    Serial1.begin(9600);
    Serial1.write(UARTW);
    Serial.println(Serial1.readString());
}

bool Bluetooth::isConnected(){ 
    if(Serial1.available()>0)
        Serial.println("conection available");
    else
        Serial.println("connection failed");
    return Serial1.available();
}