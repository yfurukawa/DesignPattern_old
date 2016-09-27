/**
 * ClothCleaning.h<br>
 * Copyright
 *
 */

#ifndef CLOTHCLEANING_H_
#define CLOTHCLEANING_H_

#include "ICleaning.h"

class ClothCleaning : public ICleaning {
 public:
  //! Constractor
  ClothCleaning();
  //! Destructor
  virtual ~ClothCleaning();
  virtual void ShowCleaningMethod();
  virtual void Start();
  virtual void PreWork();
  virtual void DoWork();
  virtual void PostWork();
  virtual void Ending();

 protected:
 private:
};

#endif  // CLOTHCLEANING_H_
