#include <Arduino.h>
#include <MenuHandler.h>
#include <MenuPage.h>
#include <StartPageAction.h>

StartPageAction STARTACTION;
MenuPage test(STARTACTION);
MenuHandler menu(test);


void setup() {
  // put your setup code here, to run once:
  String value = "blabla";

  test.setText(value);
  menu.start();
 // start.show();
}

void loop() {
  // put your main code here, to run repeatedly:

  }