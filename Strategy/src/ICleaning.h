/**
 * ICleaning.h<br>
 * Copyright
 *
 */

#ifndef ICLEANING_H_
#define ICLEANING_H_

class ICleaning {
 public:
  //! Constractor
  ICleaning();
  //! Destructor
  virtual ~ICleaning() = 0;
  virtual void ShowCleaningMethod() = 0;
  virtual void Start() = 0;
  virtual void PreWork() = 0;
  virtual void DoWork() = 0;
  virtual void PostWork() = 0;
  virtual void Ending() = 0;
 protected:
 private:
};

#endif  // ICLEANING_H_
