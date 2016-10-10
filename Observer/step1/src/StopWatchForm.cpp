/*
 * Copyright
 *
*/
#include "./StopWatchForm.h"
#include "IStopWatchObserver.h"

StopWatchForm::StopWatchForm() {

}

StopWatchForm::~StopWatchForm() {
}

void StopWatchForm::run()
{
    for(int time = 0; time < 10; ++time) {
      args.SetSeconds(time);
       for(std::list<IStopWatchObserver*>::iterator itr = observers.begin();
               itr != observers.end(); ++itr) {
           (*itr)->lapTimer(args);
       }
    }
}
