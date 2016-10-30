/*
 * Copyright
 *
*/
#include <iostream>
#include "./Established.h"
#include "Initial.h"

Established::Established() {
}

Established::~Established() {
}

void Established::open(IContext* context) {
	std::cout << "Network was opend. Do not need to open again." << std::endl;
}

void Established::close(IContext* context) {
	std::cout << "Network was closed." << std::endl;
	context->updateState(new Initial());
}

void Established::sendData(IContext* context) {
	std::cout << "Send some data." << std::endl;
}

void Established::timeout(IContext* context) {
}
