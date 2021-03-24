#include "OpAmps.h"

//CONSTRUCTORS
OpAmps::OpAmps() {
	this->rInput = 0;
	this->rOutput = 0;
	this->vOutput = 0;
	this->vInput = 0;
	this->gain = 0;

}

//SETTERS AND GETTERS
void OpAmps::setRInput(double rInput) {
	this->rInput = rInput;
}
void OpAmps::setROutput(double rOutput) {
	this->rOutput = rOutput;
}
void OpAmps::setVInput(double vInput) {
	this->vInput = vInput;
}
void OpAmps::setVOutput(double voutput) {
	this->vOutput = voutput;
}
void OpAmps::setGain(double gain) {
	this->gain = gain;
}

double OpAmps::getRInput() {
	return this->rInput;
}
double OpAmps::getROutput() {
	return this->rOutput;
}
double OpAmps::getVInput() {
	return this->vInput;
}
double OpAmps::getVOutput() {
	return this->vOutput;
}
double OpAmps::getGain() {
	return this->gain;
}

void OpAmps::inverting() {
	int neg = -1;
	double kNegative = (this->rOutput) * neg / (this->rInput);
	this->gain = this->vInput * kNegative;
}