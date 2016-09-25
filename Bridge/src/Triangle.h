/**
 * Triangle.h<br>
 * Copyright
 *
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Shape.h"

class Triangle : public Shape {
 public:
  //! Constractor
  Triangle();
  //! Destructor
  virtual ~Triangle();
  virtual void draw();

 protected:
 private:
};

#endif  // TRIANGLE_H_
