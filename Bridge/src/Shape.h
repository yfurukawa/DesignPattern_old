/**
 * Shape.h<br>
 * Copyright
 *
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <string>

class Paint;

class Shape {
 public:
  //! Constractor
  Shape();
  //! Destructor
  virtual ~Shape();
  virtual void draw() = 0;
 protected:
  void paintEllipse(std::string shape);
  void paintPolygon(std::string shape);
 private:
  Paint* paint;
};

#endif  // SHAPE_H_
