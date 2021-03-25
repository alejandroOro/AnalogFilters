#include "Branch.h"

void Branch::isSeries(std::string circuit) {

	int length = circuit.length();

	for (int i = 0;i<length;i++) {
			
		if (circuit[i] == '|') {
			
		}
	}
}

void Branch::setSeries(bool series) {

	this->series = series;
}