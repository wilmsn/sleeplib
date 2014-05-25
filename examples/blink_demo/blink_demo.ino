#define STATUSLED 13
#define STATUSLED_ON HIGH
#define STATUSLED_OFF LOW

#include <sleeplib.h>

ISR(WDT_vect) { watchdogEvent(); }

void setup(void) {
}

void loop(void) {
  digitalWrite(STATUSLED,STATUSLED_ON);
  sleep4ms(1000);
  digitalWrite(STATUSLED,STATUSLED_OFF); 
  sleep4ms(1000);
}
