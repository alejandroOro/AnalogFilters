#pragma once
#include <iostream>
#include <string>
//This class will handle the behaviour of branches, how to identify them and how they relate to each other
class Branch
{
private:
	bool series;
	bool parallel;

public:

	//SETTERS AND GETTERS
	void setSeries(bool);
	void setParallel(bool);


	//Functions that will parse strings to look for series or parallel symbols
	void isSeries(std::string);
	void isParallel(std::string);

};

