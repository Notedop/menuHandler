#ifndef StartPageAction_h
#define StartPageAction_h

#include <PageAction.h>

class StartPageAction : public PageAction {
    public:        
        
        void start();
        void stop();
        void next();
        void previous();
};

#endif