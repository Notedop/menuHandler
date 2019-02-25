#ifndef MenuPage_h
#define MenuPage_h
#include <Arduino.h>
#include <constants.h>
#include <PageAction.h>

//base class for menuPage

class MenuPage {
    public:
        MenuPage();
        MenuPage(PageAction& actionObject);
        bool setText(String &text);
        bool show();

        
    protected:
        String c_textBuffer;
        PageAction* c_actionObject;    
    };

#endif
