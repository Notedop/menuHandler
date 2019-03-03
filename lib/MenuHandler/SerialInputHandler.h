#ifndef SerialInputHandler_h
#define SerialInputHandler_h

    #include <constants.h>
    #include <InputHandler.h>

    class SerialInputHandler : public InputHandler {

    public:
    //TODO: Create constructor to define mapping between ACTION and the string read from serial.
        bool hasInput();
        ACTION getInputAction();
    };

#endif
