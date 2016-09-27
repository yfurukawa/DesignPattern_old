/*
 * Copyright
 *
*/
#include <iostream>
#include "./WorkerC.h"

WorkerC::WorkerC() {
}

WorkerC::~WorkerC() {
}

void WorkerC::communicateFunction()
{
    std::cout << "Transmit data to someware." << std::endl;
}
