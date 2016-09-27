/**
 * Facade.h<br>
 * Copyright
 *
 */

#ifndef FACADE_H_
#define FACADE_H_

#include "WorkerA.h"
#include "WorkerB.h"
#include "WorkerC.h"

class Facade {
 public:
  //! Constractor
  Facade();
  //! Destructor
  virtual ~Facade();
  void calculateFunction();
  void outputFunction();
  void communicateFunction();

 protected:
 private:
  WorkerA workerA;
  WorkerB workerB;
  WorkerC workerC;
};

#endif  // FACADE_H_
