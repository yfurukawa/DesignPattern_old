/**
 * GaugeLap.h<br>
 * Copyright
 *
 */

#ifndef GAUGELAP_H_
#define GAUGELAP_H_

#include "IStopWatchObserver.h"

class StopWatchArgs;

class GaugeLap : public IStopWatchObserver {
 public:
  //! Constractor
  GaugeLap();
  //! Destructor
  virtual ~GaugeLap();
  virtual void lapTimer(StopWatchArgs currentTime);

 protected:
 private:
};

#endif  // GAUGELAP_H_
