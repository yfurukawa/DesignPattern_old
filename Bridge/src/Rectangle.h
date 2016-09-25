/**
 * Rectangle.h<br>
 * Copyright
 *
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

class Rectangle : public Shape {
 public:
  //! Constractor
  Rectangle();
  //! Destructor
  virtual ~Rectangle();
  virtual void draw();

 protected:
 private:
};

#endif  // RECTANGLE_H_
