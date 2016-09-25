/**
 * Paint.h<br>
 * Copyright
 *
 */

#ifndef PAINT_H_
#define PAINT_H_
#include <string>

class Paint {
 public:
  //! Constractor
  Paint();
  //! Destructor
  virtual ~Paint();
  virtual void paintEllipse(std::string shape) = 0;
  virtual void paintPolygon(std::string shape) = 0;
 protected:
 private:
};

#endif  // PAINT_H_
