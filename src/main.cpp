#include <Arduino.h>
#include <MenuHandler.h>
#include <MenuPage.h>
#include <StartPageAction.h>

PageAction * STARTACTION = new StartPageAction() ;
MenuPage * initialPage;
MenuHandler * menu;

void setup() {
  //Setup your initial page
  String * pvalue = new String("Initial page loaded");
  initialPage = new MenuPage(STARTACTION);
  initialPage->setText(pvalue);
  
  //Pass initial page to your pageHandler
  menu = new MenuHandler(initialPage);
 
}

void loop() {
  //Start the menu
   menu->start();
  }