/**
 * DigitalLap.h<br>
 * Copyright
 *
 */

#ifndef DIGITALLAP_H_
#define DIGITALLAP_H_

#include "IStopWatchObserver.h"

class StopWatchArgs;

class DigitalLap : public IStopWatchObserver {
 public:
  //! Constractor
  DigitalLap();
  //! Destructor
  virtual ~DigitalLap();
  virtual void lapTimer(StopWatchArgs currentTime);

 protected:
 private:
};

#endif  // DIGITALLAP_H_
