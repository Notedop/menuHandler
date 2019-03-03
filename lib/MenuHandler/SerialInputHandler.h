#ifndef SerialInputHandler_h
#define SerialInputHandler_h

    #include <constants.h>
    #include <InputHandler.h>

    class SerialInputHandler : public InputHandler {

    public:
        SerialInputHandler();
        bool hasInput();
        ACTION getInputAction();
    };

#endif
