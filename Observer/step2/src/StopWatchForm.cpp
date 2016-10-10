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
          notifyObserver(args);
    }
}
