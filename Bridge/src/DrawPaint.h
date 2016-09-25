/**
 * DrawPaint.h<br>
 * Copyright
 *
 */

#ifndef DRAWPAINT_H_
#define DRAWPAINT_H_
#include <string>
#include "Paint.h"

class DrawPaint : public Paint {
 public:
  //! Constractor
  DrawPaint();
  //! Destructor
  virtual ~DrawPaint();
  virtual void paintEllipse(std::string shape);
  virtual void paintPolygon(std::string shape);

 protected:
 private:
};

#endif  // DRAWPAINT_H_
