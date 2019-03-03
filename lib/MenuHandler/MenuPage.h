#ifndef MenuPage_h
#define MenuPage_h
#include <Arduino.h>
#include <constants.h>
#include <PageAction.h>
#include <InputHandler.h>

//base class for menuPage

class MenuPage {
    public:
        MenuPage(PageAction * actionObject);
        bool setText(String * text);
        bool show();
        InputHandler * c_inputHandler;
        
    protected:
        String ** c_textBuffer;
        PageAction ** c_actionObject;    
    };

#endif
