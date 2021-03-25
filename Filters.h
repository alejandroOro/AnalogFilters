#pragma once
#include <iostream>
#include "Branch.h"
#include <cmath>

class Filters:public Branch
{
	private:
		double resistance;
		double voltage;
		double current;
	public: 
		void ohmsLaw();
		void setCurrent(double);
		void setVoltage(double);
		void setResistance(double);
		Filters();
		Filters(double,double,double);
		void toString();

};

