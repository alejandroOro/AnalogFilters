#include "Filters.h"

Filters::Filters() {

	std::cout << "filters.cpp";
	this->current = 0;
	this->resistance = 0;
	this->voltage = 0;
}

Filters::Filters(double voltage, double current, double resistance) {
	this->current = current;
	this->voltage = voltage;
	this->resistance = resistance;
}

void Filters::ohmsLaw() {
	bool nonZeroIV = this->current * this->voltage;
	bool nonZeroVR = this->resistance * this->voltage;
	bool nonZeroIR = this->current * this->resistance;

	if (current == 0 && nonZeroVR) {
		setCurrent(this->voltage / this->resistance) ;
	}
	else if (voltage == 0 && nonZeroIR) {
		setVoltage(this->current * this->resistance);
	}
	else if(resistance == 0 && nonZeroIV) {
		setResistance(this->voltage / this->current);
	}

}

void Filters::setCurrent(double current) {
	this->current = current;
}

void Filters::setResistance(double resistance) {
	this->resistance = resistance;
}

void Filters::setVoltage(double voltage) {

	this->voltage = voltage;
}

void Filters::toString() {

	std::cout << "Voltage: "<<this->voltage<<" volts\tCurrent: "<<this->current<<" amps\tResistance: "<<this->resistance<<" ohms\n";
}