#include <MenuHandler.h>
#include <MenuPage.h>
#include <constants.h>

MenuHandler::MenuHandler(MenuPage * page) {
   this->c_currentPage = &page;
}

void MenuHandler::start() {
    
    //Replaces initial setup
    Serial.begin(9600);
    Serial.println("MENUHANDLER START CALLED");
    (*c_currentPage)->show();

    while (true)
    {   //this replaces main loop
     
        //read input
        //TODO: Create inputHandler object which returns an action that requires to be executed
        while((*c_currentPage)->c_inputHandler->hasInput()) {
            
            switch ((*c_currentPage)->c_inputHandler->getInputAction())
            {
                case ACTION::START:
                    Serial.println(F("Start action choosen"));
                    //TODO: Execute action
                    //TODO: Get new menupage from action 
                    //TODO: Clear memory and update c_currentpage.
                    break;
                case ACTION::NEXT:
                    Serial.println(F("Next action choosen"));
                    break;
                case ACTION::PREVIOUS:
                    Serial.println(F("Previous action choosen"));
                    break;
                case ACTION::STOP:
                    Serial.println(F("Stop action choosen"));
                    break;
                default:
                    break;
            }
            

        }

    };
    Serial.end();
}

bool MenuHandler::writeMenuItem() {
    return false;
}

bool MenuHandler::actionAvailable() {
    return false;

}