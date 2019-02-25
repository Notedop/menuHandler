#ifndef PageAction_h
#define PageAction_h

#include <Arduino.h>
using namespace std;

class PageAction
{
  public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void next() = 0;
    virtual void previous() = 0;
};

#endif