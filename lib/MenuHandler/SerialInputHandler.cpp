#include <SerialInputHandler.h>
#include <Arduino.h>

bool SerialInputHandler::hasInput() {
   //do something
    char command;
    do
        {
        command = toupper (Serial.read ());
        } while (command != '1' && command != '2' && command != '3' && command != '4');
    switch (command)
    {
        case '1':
            /* code */
            this->currentAction = ACTION::START;
            command = '0';
            break;
        case '2':
            /* code */
            this->currentAction = ACTION::NEXT;
            command = '0';
            break;
        case '3':
            /* code */
            this->currentAction = ACTION::PREVIOUS;
            command = '0';
            break;
        case '4':
            /* code */
            this->currentAction = ACTION::STOP;
            command = '0';
            break;
        default:
            return false;
            break;
    }
   return true;
}

ACTION SerialInputHandler::getInputAction() {
   //do something
   return this->currentAction;
}
