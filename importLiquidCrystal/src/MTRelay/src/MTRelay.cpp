#include "MTRelay.h"

MTRelay::MTRelay(const byte pin, const bool lt) : m_relayPin(pin)
                                      , m_levelTrigger(lt)
{ /* public: empty ctor */ }

MTRelay::MTRelay() 
{ /* protected: empty ctor */ }

void MTRelay::begin() {
    digitalWrite(m_relayPin, !m_levelTrigger);
    pinMode(m_relayPin, OUTPUT);
}

void MTRelay::set(const bool state) {
    digitalWrite(m_relayPin, state ^ !m_levelTrigger);
    m_state = digitalRead(m_relayPin) ^ !m_levelTrigger;
}

bool MTRelay::state() const {
    return m_state;
}
