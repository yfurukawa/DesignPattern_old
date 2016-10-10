/**
 * StopWatchFactory.h<br>
 * Copyright
 *
 */

#ifndef STOPWATCHFACTORY_H_
#define STOPWATCHFACTORY_H_

#include <iostream>
#include "StopWatchSubject.h"

class StopWatchFactory {
 public:
    static StopWatchFactory& getInstance();
    StopWatchSubject* getStopWatch();
 protected:
 private:
  //! Constractor
  StopWatchFactory();
  StopWatchFactory(StopWatchFactory&): stopWatch(NULL){};
  //! Destructor
  virtual ~StopWatchFactory();
  StopWatchFactory& operator=(StopWatchFactory& s) { return s; };
  StopWatchSubject* stopWatch;
};

#endif  // STOPWATCHFACTORY_H_
