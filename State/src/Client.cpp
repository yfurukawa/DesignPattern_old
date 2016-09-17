/*
 * Copyright
 *
*/
#include <iostream>
#include "./Client.h"
#include "NetworkConnection.h"

Client::Client() : connection_(NULL) {
}

Client::~Client() {
}

void Client::run() {
	// Initial State
	std::cout << "Conduct command to Initial state." << std::endl;
	connection_->sendData();
	connection_->close();
	connection_->open();
	std::cout << std::endl;

	// Established state
	std::cout << "Conduct command to Established state." << std::endl;
	connection_->open();
	connection_->sendData();
	connection_->close();
	std::cout << std::endl;

	// Initial State
	std::cout << "Conduct command to Initial state." << std::endl;
	connection_->open();
}
