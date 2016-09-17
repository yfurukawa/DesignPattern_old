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

  virtual void open() = 0;
  virtual void close() = 0;
  virtual void sendData() = 0;
  virtual void timeout() = 0;
  void setContecxt(IContext* context) { context_ = context; }
  void setNextState(NetworkState* state) { nextState_ = state; }
 protected:
  IContext* context_;
  NetworkState* nextState_;
 private:
};

#endif  // NETWORKSTATE_H_
