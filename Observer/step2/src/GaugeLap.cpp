/*
 * Copyright
 *
*/
#include <iostream>
#include "./GaugeLap.h"
#include "StopWatchArgs.h"
#include "StopWatchFactory.h"

GaugeLap::GaugeLap() {
    StopWatchFactory::getInstance().getStopWatch()->attachObserver(this);
}

GaugeLap::~GaugeLap() {
}

void GaugeLap::lapTimer( StopWatchArgs currentTime )
{
    for(int count = 0; count < currentTime.GetSeconds(); ++ count) {
        std::cout << "*";
    }
    std::cout << std::endl;
}
