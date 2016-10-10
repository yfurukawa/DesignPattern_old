/**
 * StopWatchSubject.h<br>
 * Copyright
 *
 */

#ifndef STOPWATCHSUBJECT_H_
#define STOPWATCHSUBJECT_H_

#include <list>
#include "StopWatchArgs.h"

class IStopWatchObserver;

class StopWatchSubject {
 public:
  //! Constractor
  StopWatchSubject();
  //! Destructor
  virtual ~StopWatchSubject();
  virtual void attachObserver(IStopWatchObserver* observer);
  virtual void detachObserver(IStopWatchObserver* observer);
 protected:
  void notifyObserver(StopWatchArgs args);
 private:
  std::list<IStopWatchObserver*> observers;
};

#endif  // STOPWATCHSUBJECT_H_
