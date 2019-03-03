#ifndef InputHandler_h
#define InputHandler_h

    #include <constants.h>

    //base class for InputHandler

    class InputHandler {

    public:
        virtual bool hasInput() = 0;
        virtual ACTION getInputAction() = 0;

    protected:
        ACTION currentAction;
    };

#endif
