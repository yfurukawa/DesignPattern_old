/**
 * Circle.h<br>
 * Copyright
 *
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Shape.h"

class Circle : public Shape {
 public:
  //! Constractor
  Circle();
  //! Destructor
  virtual ~Circle();
  virtual void draw();

 protected:
 private:
};

#endif  // CIRCLE_H_
