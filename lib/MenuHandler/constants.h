#ifndef constants_h
#define constants_h

#include <Arduino.h>

enum ACTION {START, STOP, NEXT, PREVIOUS};

struct ACTIONMAP {
String input;
ACTION output;
};

#endif
