#include <Arduino.h>
#include <MenuPage.h>
#include <PageAction.h>

//base class for menuPage


MenuPage::MenuPage(PageAction * actionObject) {
    //_actionObject = actionObject;
    c_actionObject = &actionObject;
    (*c_actionObject)->start();
}

bool MenuPage::setText(String * textBuffer) {

    Serial.begin(9600);
    Serial.print("Textbuffer: ");
    Serial.println(*textBuffer);
    c_textBuffer = &textBuffer;
    Serial.print("C_Textbuffer: ");
    Serial.println(**c_textBuffer);
    Serial.end();
    return true;
}

bool MenuPage::show() {

    Serial.begin(9600);
    Serial.print("C_Textbuffer: ");
    //String output = c_textBuffer;
    Serial.println(**c_textBuffer);
    Serial.end();
    return true;
}
