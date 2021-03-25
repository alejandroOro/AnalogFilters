// AnalogFilters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Filters.h"
#include "OpAmps.h"

//Main function with temporary testing
int main(int argc, char* argv)
{
    std::cout << "Hello World!\n";
    Filters f1;
    Filters f2(3,2,0);
    f1.setCurrent(10);
    f1.setVoltage(0);
    f1.setResistance(5);
    f1.ohmsLaw();
    f2.ohmsLaw();
    f1.toString();
    f2.toString();

    OpAmps opamp;

    opamp.setVInput(10);
    opamp.setRInput(5);
    opamp.setROutput(10);
    opamp.nonInverting();
    opamp.vOutputWithGain();
    std::cout <<"Gain: "<< opamp.getGain() << "Vout: "<<opamp.getVOutput() << std::endl;
}

