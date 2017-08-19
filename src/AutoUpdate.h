#include "Arduino.h"

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
