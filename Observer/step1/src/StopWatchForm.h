/**
 * StopWatchForm.h<br>
 * Copyright
 *
 */

#ifndef STOPWATCHFORM_H_
#define STOPWATCHFORM_H_

#include "StopWatchSubject.h"
#include "StopWatchArgs.h"

class StopWatchForm : public StopWatchSubject {
 public:
  //! Constractor
  StopWatchForm();
  //! Destructor
  virtual ~StopWatchForm();
  void run();

 protected:
 private:
  StopWatchArgs args;
};

#endif  // STOPWATCHFORM_H_
