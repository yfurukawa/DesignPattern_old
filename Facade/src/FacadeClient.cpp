/*
 * Copyright
 *
*/
#include <iostream>
#include "./FacadeClient.h"
#include "Facade.h"

FacadeClient::FacadeClient() : facade(NULL) {
    facade = new Facade();
}

FacadeClient::~FacadeClient() {
    delete facade;
}

void FacadeClient::run() {
    facade->calculateFunction();
    facade->communicateFunction();
    facade->outputFunction();
}
