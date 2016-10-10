/*
 * Copyright
 *
*/
#include <iostream>
#include "./StopWatchFactory.h"
#include "StopWatchForm.h"

StopWatchFactory::StopWatchFactory() : stopWatch(NULL){
}

StopWatchFactory::~StopWatchFactory() {
}

StopWatchFactory& StopWatchFactory::getInstance()
{
    static StopWatchFactory own;
    return own;
}

StopWatchSubject* StopWatchFactory::getStopWatch()
{
    if(stopWatch == NULL) {
        stopWatch = new StopWatchForm();
    }
    return stopWatch;
}
