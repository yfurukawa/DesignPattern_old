/*
 * Copyright
 *
*/
#include <iostream>
#include "./NetworkConnection.h"
#include "NetworkState.h"
#include "Initial.h"

NetworkConnection::NetworkConnection() : state_(NULL){
	state_ = new Initial();
	state_->setContecxt(this);
}

NetworkConnection::~NetworkConnection() {
}

void NetworkConnection::updateState(NetworkState* state) {
	state_ = state;
}

void NetworkConnection::open() {
	state_->open();
}

void NetworkConnection::close() {
	state_->close();
}

void NetworkConnection::sendData() {
	state_->sendData();
}

void NetworkConnection::timeout() {
	state_->timeout();
}
