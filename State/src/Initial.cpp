/*
 * Copyright
 *
*/
#include <iostream>
#include "./Initial.h"
#include "Established.h"

Initial::Initial() {
	nextState_ = new Established();
	nextState_ = this;
}

Initial::~Initial() {
	delete nextState_;
}

void Initial::open() {
	std::cout << "Initialized. Network is opened." << std::endl;
	context_->updateState(nextState_);
}

void Initial::close() {
	std::cout << "Do not need to close due to network is not opened." << std::endl;
}

void Initial::sendData() {
	std::cout << "Can not send any data due to network is not opened." << std::endl;
}

void Initial::timeout() {
}
