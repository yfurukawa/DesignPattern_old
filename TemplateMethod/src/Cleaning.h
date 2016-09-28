/**
 * Cleaning.h<br>
 * Copyright
 *
 */

#ifndef CLEANING_H_
#define CLEANING_H_

class Cleaning {
 public:
  //! Constractor
  Cleaning();
  //! Destructor
  virtual ~Cleaning();
  void DoCleaning();

 protected:
  virtual void ShowCleaningMethod() = 0;
  virtual void Start() = 0;
  virtual void PreWork() = 0;
  virtual void DoWork() = 0;
  virtual void PostWork() = 0;
  virtual void Ending() = 0;
 private:
};

#endif  // CLEANING_H_
