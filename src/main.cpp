#include <Arduino.h>
#include <MenuHandler.h>
#include <MenuPage.h>
#include <StartPageAction.h>

PageAction * STARTACTION = new StartPageAction() ;
MenuPage * initialPage;
MenuHandler * menu;

void setup() {
  //Setup your initial page
  String * pvalue = new String("Available actions: (1) Start, (2) Next, (3) Previous, (4) Stop");
  initialPage = new MenuPage(STARTACTION);
  initialPage->setText(pvalue);
  
  //Pass initial page to your pageHandler
  menu = new MenuHandler(initialPage);
 
}

void loop() {
  //Start the menu
   menu->start();
  }