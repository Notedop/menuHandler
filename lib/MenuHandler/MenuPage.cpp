#include <Arduino.h>
#include <MenuPage.h>
#include <PageAction.h>
#include <SerialInputHandler.h>

//base class for menuPage


MenuPage::MenuPage(PageAction * actionObject) {
    c_actionObject = &actionObject;
    //TODO: get inputhandler from constructor
    c_inputHandler = new SerialInputHandler();
    (*c_actionObject)->start();
    Serial.begin(9600);
    Serial.println("testing input: ");
    Serial.print((*c_actionObject)->c_map.input); //not accessin array here, I know...
    Serial.end();
}

bool MenuPage::setText(String * textBuffer) {

#ifdef DEBUG 
    Serial.begin(9600);
    Serial.print("Textbuffer: ");
    Serial.println(*textBuffer);
#endif

    c_textBuffer = &textBuffer;

#ifdef DEBUG 
    Serial.print("C_Textbuffer: ");
    Serial.println(**c_textBuffer);
    Serial.end();
#endif
    return true;
}

bool MenuPage::show() {


 /* Serial.begin(9600);
    Serial.print("C_Textbuffer: ");
    String output = c_textBuffer;*/
    Serial.println(**c_textBuffer);
    //Serial.end();
    return true;
}
