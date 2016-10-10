/**
 * StopWatchSubject.h<br>
 * Copyright
 *
 */

#ifndef STOPWATCHSUBJECT_H_
#define STOPWATCHSUBJECT_H_

#include <list>

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
  std::list<IStopWatchObserver*> observers;
 private:
};

#endif  // STOPWATCHSUBJECT_H_
