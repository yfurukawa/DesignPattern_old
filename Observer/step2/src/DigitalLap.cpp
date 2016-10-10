/*
 * Copyright
 *
*/
#include <iostream>
#include "./DigitalLap.h"
#include "StopWatchArgs.h"
#include "StopWatchFactory.h"

DigitalLap::DigitalLap() {
    StopWatchFactory::getInstance().getStopWatch()->attachObserver(this);
}

DigitalLap::~DigitalLap() {
}

void DigitalLap::lapTimer( StopWatchArgs currentTime )
{
    std::cout << currentTime.GetSeconds() << std::endl;
}
