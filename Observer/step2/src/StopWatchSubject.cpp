/*
 * Copyright
 *
*/
#include "./StopWatchSubject.h"
#include "IStopWatchObserver.h"

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

void StopWatchSubject::notifyObserver( StopWatchArgs args )
{
    for(std::list<IStopWatchObserver*>::iterator itr = observers.begin();
            itr != observers.end(); ++itr) {
        (*itr)->lapTimer(args);
    }
}
