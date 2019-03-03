#include <SerialInputHandler.h>
#include <Arduino.h>

//TODO: Create constructor to define mapping between ACTION and the string read from serial.

bool SerialInputHandler::hasInput() {
    char command;
    do
        {
        command = toupper (Serial.read());
        //TODO: amend to accept multiple characters
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
