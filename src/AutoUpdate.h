#include "Arduino.h"
#include <ArduinoOTA.h>
#include <ESP8266mDNS.h>

#ifndef AutoUpdate_h
#define AutoUpdate_h

class AutoUpdate
{
public:
AutoUpdate( const char* pPassword, const char* pHostname );
void start();
void loop();
};

#endif
