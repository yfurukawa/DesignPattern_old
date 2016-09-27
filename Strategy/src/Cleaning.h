/**
 * Cleaning.h<br>
 * Copyright
 *
 */

#ifndef CLEANING_H_
#define CLEANING_H_

class ICleaning;

class Cleaning {
 public:
  //! Constractor
  Cleaning(ICleaning* cleaning);
  //! Destructor
  virtual ~Cleaning();
  void DoCleaning();

 protected:
 private:
  Cleaning();
  ICleaning* cleaning_;
};

#endif  // CLEANING_H_
