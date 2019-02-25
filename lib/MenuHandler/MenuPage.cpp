#include <Arduino.h>
#include <MenuPage.h>
#include <PageAction.h>

//base class for menuPage

MenuPage::MenuPage() {
    //empty
}

MenuPage::MenuPage(PageAction& actionObject) {
    //_actionObject = actionObject;
    this->c_actionObject = &actionObject;
}

bool MenuPage::setText(String &textBuffer) {

    Serial.begin(9600);
    Serial.print("Textbuffer: ");
    Serial.println(textBuffer);
    this->c_textBuffer = textBuffer;
    Serial.print("C_Textbuffer: ");
    Serial.println(this->c_textBuffer);
    Serial.end();
    return true;
}

bool MenuPage::show() {
   
    Serial.begin(9600);
    Serial.print("C_Textbuffer: ");
    Serial.println(this->c_textBuffer);
    Serial.end();
    return true;   
}
