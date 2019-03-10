#include <Arduino.h>
#include <MenuHandler.h>
#include <MenuPage.h>
#include <StartPageAction.h>

//TODO: Maybe update classes to accept objects instead of pointers and utilize pointers inside class instead
//TODO: Investigate how to properly manage memory 
PageAction * startAction;
MenuPage * initialPage;
MenuHandler * menu;

struct ACTIONMAP actionMap[] {
{"1", ACTION::START}, 
{"2", ACTION::NEXT},
{"3", ACTION::PREVIOUS},
{"4", ACTION::STOP} };

void setup() {
  //Setup your initial page

  startAction = new StartPageAction(actionMap);
  
  String * pvalue = new String(F("Available actions: (1) Start, (2) Next, (3) Previous, (4) Stop"));
  initialPage = new MenuPage(startAction);
  initialPage->setText(pvalue);
  
  //Pass initial page to your pageHandler
  menu = new MenuHandler(initialPage);
 
}

void loop() {
  //Start the menu
   menu->start();
  }