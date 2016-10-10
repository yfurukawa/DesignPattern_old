/*
 * Copyright
 *
*/
#include <iostream>
#include "./DigitalLap.h"
#include "StopWatchArgs.h"

DigitalLap::DigitalLap() {
}

DigitalLap::~DigitalLap() {
}

void DigitalLap::lapTimer( StopWatchArgs currentTime )
{
    std::cout << currentTime.GetSeconds() << std::endl;
}
