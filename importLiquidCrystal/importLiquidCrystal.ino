/*
   Dimostra come usare librerie interne all'albero dei sorgenti dello
   sketch.
   url = https://programmersqtcpp.blogspot.com/2022/07/arduino-sketch-multi-file.html

Albero dei sorgenti:
importLiquidCrystal
├── src
│   ├── LiquidCrystal
│   │   ├── src
│   │   │   ├── LiquidCrystal.cpp
│   │   │   └── LiquidCrystal.h
│   │   ├── keywords.txt
│   │   ├── library.properties
│   │   └── README.adoc
│   └── MTRelay
│       ├── src
│       │   ├── MTRelay.cpp
│       │   └── MTRelay.h
│       └── library.properties
└── importLiquidCrystal.ino
*/

/* include LiquidCrystal.h locale */
#include "src/LiquidCrystal/src/LiquidCrystal.h"
/* include MTRelay.h locale */
#include "src/MTRelay/src/MTRelay.h"

const char *onoff_str(const bool i) { 
    static const char *onoff[] = { "OFF", "ON " };
    return onoff[i];
} 
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

// Relay(pin, levelTrigger)
MTRelay relayOnD6(6, HIGH);   // High Level Trigger
MTRelay relayOnD5(5, LOW);    // Low Level Trigger

void setup() {
    Serial.begin(115200);
    lcd.begin(2, 16);
    lcd.setCursor(0, 2);
    lcd.print("Hello!");
    relayOnD6.begin();
    relayOnD5.begin();

    // operate on relay connected on D6   
    Serial.println("## Relay state on D6 ##");
    Serial.println(onoff_str(relayOnD6.state()));
    delay(500);
    
    relayOnD6.set(ON);
    Serial.println(onoff_str(relayOnD6.state()));
    delay(500);
    
    relayOnD6.set(OFF);
    Serial.println(onoff_str(relayOnD6.state()));
    delay(500);
    
    relayOnD6.set(ON);
    Serial.println(onoff_str(relayOnD6.state()));
    delay(500);
    
    relayOnD6.set(OFF);
    Serial.println(onoff_str(relayOnD6.state()));
    delay(500);

     // operate on relay connected on D5   
    Serial.println("## Relay state on D5 ##"); 
    Serial.println(onoff_str(relayOnD5.state()));
    delay(500);

    relayOnD5.set(ON);
    Serial.println(onoff_str(relayOnD5.state()));
    delay(500);
    
    relayOnD5.set(OFF);
    Serial.println(onoff_str(relayOnD5.state()));
    delay(500);
    
    relayOnD5.set(ON);
    Serial.println(onoff_str(relayOnD5.state()));
    delay(500);
    
    relayOnD5.set(OFF);
    Serial.println(onoff_str(relayOnD5.state()));
}

void loop() {
  
}
