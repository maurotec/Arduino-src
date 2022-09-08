#ifndef MTRELAY_H
#define MTRELAY_H

#include <Arduino.h>
#ifndef ON
#define ON  true
#endif
#ifndef OFF
#define OFF false
#endif

class MTRelay {

  public:
    
    MTRelay(const byte pin, const bool lt = LOW);  
        
    void begin();
    void set(const bool state);
    bool state() const;

  protected:
    byte m_relayPin;
    bool m_state = OFF;
    bool m_levelTrigger;
    MTRelay();
}; 
#endif
