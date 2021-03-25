#pragma once
class OpAmps
{
private:
	double rInput;
	double rOutput;
	double vOutput;
	double vInput;
	double gain;

public:

	OpAmps();

	void setRInput(double);
	void setROutput(double);
	void setVInput(double);
	void setVOutput(double);
	void setGain(double);

	double getRInput();
	double getROutput();
	double getVInput();
	double getVOutput();
	double getGain();

	void nonInverting();
	void inverting();
	void vOutputWithGain();
};

