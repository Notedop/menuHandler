#ifndef PageAction_h
#define PageAction_h

#include <Arduino.h>
#include <constants.h>

class PageAction
{
  public:
    PageAction(ACTIONMAP map[])                                            
    : c_map(*map) {}   
    virtual ~PageAction() {};
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void next() = 0;
    virtual void previous() = 0;
    ACTIONMAP c_map;                                                              
    
};

#endif