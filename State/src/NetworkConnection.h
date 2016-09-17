/**
 * NetworkConnection.h<br>
 * Copyright
 *
 */

#ifndef NETWORKCONNECTION_H_
#define NETWORKCONNECTION_H_

#include "IContext.h"

class NetworkState;

class NetworkConnection : public IContext {
 public:
  //! Constractor
  NetworkConnection();
  //! Destructor
  virtual ~NetworkConnection();

  virtual void updateState(NetworkState* state);

  virtual void open();
  virtual void close();
  virtual void sendData();
  virtual void timeout();

 protected:
  NetworkState* state_;
 private:
};

#endif  // NETWORKCONNECTION_H_
