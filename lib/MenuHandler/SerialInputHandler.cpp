#include <SerialInputHandler.h>
#include <Arduino.h>

struct map {
    String input;
    ACTION output;
};

struct map actionMap[] {    {"1", ACTION::START}, 
                            {"2", ACTION::NEXT},
                            {"3", ACTION::PREVIOUS},
                            {"4", ACTION::STOP} };

bool SerialInputHandler::hasInput() {

    String command;
    bool commandAvailable  = false;
    do
        {//TODO: amend to accept multiple characters
            if (Serial.available()>0) {
                command = Serial.readStringUntil('\n');
                commandAvailable = true;
            }
        } while (!commandAvailable);
    
    commandAvailable  = false;

    for (struct map getAction : actionMap) {
        //do stuff
        if (getAction.input.equals(command)) {
            this->currentAction = getAction.output;
            return true;
        }
    }

    return false;
}

ACTION SerialInputHandler::getInputAction() {
   //do something
   return this->currentAction;
}
