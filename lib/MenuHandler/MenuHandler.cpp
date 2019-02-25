#include <MenuHandler.h>
#include <MenuPage.h>

MenuHandler::MenuHandler(MenuPage page) {
   this->c_currentPage = page;
}

void MenuHandler::start() {
    Serial.begin(9600);
    Serial.println("MENUHANDLER START CALLED");
    Serial.end();
    c_currentPage.show();
}

bool MenuHandler::writeMenuItem() {
    return false;
}

bool MenuHandler::actionAvailable() {
    return false;

}