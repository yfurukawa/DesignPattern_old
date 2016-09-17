/**
 * Established.h<br>
 * Copyright
 *
 */

#ifndef ESTABLISHED_H_
#define ESTABLISHED_H_

#include "NetworkState.h"

class Established : public NetworkState {
 public:
  //! Constractor
  Established();
  //! Destructor
  virtual ~Established();

  virtual void open();
  virtual void close();
  virtual void sendData();
  virtual void timeout();
 protected:
 private:
};

#endif  // ESTABLISHED_H_
