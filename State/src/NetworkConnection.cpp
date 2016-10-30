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
}

NetworkConnection::~NetworkConnection() {
}

void NetworkConnection::updateState(NetworkState* state) {
	if(state_ != NULL) {
		delete state_;
	}
	state_ = state;
}

void NetworkConnection::open() {
	state_->open(this);
}

void NetworkConnection::close() {
	state_->close(this);
}

void NetworkConnection::sendData() {
	state_->sendData(this);
}

void NetworkConnection::timeout() {
	state_->timeout(this);
}
