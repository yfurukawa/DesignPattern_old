/**
 * FillPaint.h<br>
 * Copyright
 *
 */

#ifndef FILLPAINT_H_
#define FILLPAINT_H_
#include <string>
#include "Paint.h"

class FillPaint : public Paint {
 public:
  //! Constractor
  FillPaint();
  //! Destructor
  virtual ~FillPaint();
  virtual void paintEllipse(std::string shape);
  virtual void paintPolygon(std::string shape);

 protected:
 private:
};

#endif  // FILLPAINT_H_
