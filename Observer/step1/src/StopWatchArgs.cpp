/*
 * Copyright
 *
*/
#include "./StopWatchArgs.h"

StopWatchArgs::StopWatchArgs() : seconds(0) {
}

StopWatchArgs::~StopWatchArgs() {
}

int StopWatchArgs::GetSeconds() const
{
    return seconds;
}

void StopWatchArgs::SetSeconds( int seconds )
{
    this->seconds = seconds;
}
