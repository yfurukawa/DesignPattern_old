/**
 * IStopWatchObserver.h<br>
 * Copyright
 *
 */

#ifndef ISTOPWATCHOBSERVER_H_
#define ISTOPWATCHOBSERVER_H_

class StopWatchArgs;

class IStopWatchObserver {
 public:
  //! Constractor
  IStopWatchObserver();
  //! Destructor
  virtual ~IStopWatchObserver();
  virtual void lapTimer(StopWatchArgs currentTime) = 0;
 protected:
 private:
};

#endif  // ISTOPWATCHOBSERVER_H_
