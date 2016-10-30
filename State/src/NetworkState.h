/**
 * NetworkState.h<br>
 * Copyright
 *
 */

#ifndef NETWORKSTATE_H_
#define NETWORKSTATE_H_

#include "IContext.h"

class NetworkState {
 public:
  //! Constractor
  NetworkState();
  //! Destructor
  virtual ~NetworkState();

  virtual void open(IContext* context) = 0;
  virtual void close(IContext* context) = 0;
  virtual void sendData(IContext* context) = 0;
  virtual void timeout(IContext* context) = 0;

 protected:
 private:
};

#endif  // NETWORKSTATE_H_
