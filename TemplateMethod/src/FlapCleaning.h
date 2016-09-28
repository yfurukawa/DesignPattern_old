/**
 * FlapCleaning.h<br>
 * Copyright
 *
 */

#ifndef FLAPCLEANING_H_
#define FLAPCLEANING_H_

#include "Cleaning.h"

class FlapCleaning : public Cleaning {
 public:
  //! Constractor
  FlapCleaning();
  //! Destructor
  virtual ~FlapCleaning();
  virtual void ShowCleaningMethod();
  virtual void Start();
  virtual void PreWork();
  virtual void DoWork();
  virtual void PostWork();
  virtual void Ending();

 protected:
 private:
};

#endif  // FLAPCLEANING_H_
