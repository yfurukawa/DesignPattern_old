/*
 * Copyright
 *
*/
#include <iostream>
#include "./Established.h"

Established::Established() {
}

Established::~Established() {
}

void Established::open() {
	std::cout << "Network was opend. Do not need to open again." << std::endl;
}

void Established::close() {
	std::cout << "Network was closed." << std::endl;
	context_->updateState(nextState_);
}

void Established::sendData() {
	std::cout << "Send some data." << std::endl;
}

void Established::timeout() {
}
