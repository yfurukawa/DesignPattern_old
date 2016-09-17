/**
 * Timeout.h<br>
 * Copyright
 *
 */

#ifndef TIMEOUT_H_
#define TIMEOUT_H_

#include "NetworkState.h"

class Timeout : public NetworkState {
 public:
  //! Constractor
  Timeout();
  //! Destructor
  virtual ~Timeout();

  virtual void open();
  virtual void close();
  virtual void sendData();
  virtual void timeout();

 protected:
 private:
};

#endif  // TIMEOUT_H_
