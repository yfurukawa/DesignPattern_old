/*
 * Copyright
 *
*/
#include <iostream>
#include "./Initial.h"
#include "Established.h"

Initial::Initial() {
}

Initial::~Initial() {
}

void Initial::open(IContext* context) {
	std::cout << "Initialized. Network is opened." << std::endl;
	context->updateState(new Established());
}

void Initial::close(IContext* context) {
	std::cout << "Do not need to close due to network is not opened." << std::endl;
}

void Initial::sendData(IContext* context) {
	std::cout << "Can not send any data due to network is not opened." << std::endl;
}

void Initial::timeout(IContext* context) {
}
