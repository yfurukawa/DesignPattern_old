/*
 * Copyright
 *
*/
#include <iostream>
#include "./GaugeLap.h"
#include "StopWatchArgs.h"

GaugeLap::GaugeLap() {
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
