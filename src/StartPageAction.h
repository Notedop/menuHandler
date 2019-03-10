#ifndef StartPageAction_h
#define StartPageAction_h

#include <PageAction.h>

class StartPageAction : public PageAction {
    public:        
    StartPageAction(ACTIONMAP map[])                                      
        : PageAction(map) {} 
        void start();
        void stop();
        void next();
        void previous();
};

#endif