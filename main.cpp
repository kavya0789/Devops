#include <iostream>
#include "HomeOwner.h"
#include "SmartBed.h"
#include "SmartGyeser.h"
int main() {
  HomeOwner homeowner(true,"Joshua",24);
  SmartGeyser geyser("Winter", 10.4, 63);
  SmartBed bed;

 
cout << "Homeowner " << homeowner.showdetails() << endl;
    std::cout << "Current season: " << geyser.getSeason() << std::endl;
    std::cout << "Current temperature: " << geyser.getTemperature() << " C" << std::endl;
    std::cout << "Heater temperature: " << geyser.WaterHeater::getTemperature() << " C" << std::endl;
  return 0;
}
