#ifndef MenuHandler_h
#define MenuHandler_h

#include <Arduino.h>
#include <MenuPage.h>

//base class for menuHandler

class MenuHandler {

    public:
        MenuHandler(MenuPage * page);
        void start();
        bool writeMenuItem();
        bool actionAvailable();

        enum ACTION {START, STOP, NEXT, PREVIOUS};
    private:
        MenuPage ** c_currentPage;
};

#endif
