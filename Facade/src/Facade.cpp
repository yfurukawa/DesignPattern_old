/*
 * Copyright
 *
*/
#include "./Facade.h"

Facade::Facade() {
}

Facade::~Facade() {
}

void Facade::calculateFunction()
{
    workerA.calculateFunction();
}

void Facade::outputFunction()
{
    workerB.outputFunction();
}

void Facade::communicateFunction()
{
    workerC.communicateFunction();
}
