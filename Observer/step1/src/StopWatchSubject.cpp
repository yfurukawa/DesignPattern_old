/*
 * Copyright
 *
*/
#include "./StopWatchSubject.h"

StopWatchSubject::StopWatchSubject() {
}

StopWatchSubject::~StopWatchSubject() {
}

void StopWatchSubject::attachObserver( IStopWatchObserver* observer )
{
    observers.push_back(observer);
}

void StopWatchSubject::detachObserver( IStopWatchObserver* observer )
{
    observers.remove(observer);
}
