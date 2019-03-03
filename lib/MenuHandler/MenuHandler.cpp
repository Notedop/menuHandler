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
        char command;
        do
            {
            command = toupper (Serial.read ());
            } while (command != '1' && command != '2' && command != '3');
        Serial.println("Received command");
        Serial.println(command);
        switch (command)
        {
            case '1':
                /* code */
                Serial.println("In switch command");
                command = '0';
                
                break;
        
            default:
                break;
        }        
    }

    Serial.end();
}

bool MenuHandler::writeMenuItem() {
    return false;
}

bool MenuHandler::actionAvailable() {
    return false;

}