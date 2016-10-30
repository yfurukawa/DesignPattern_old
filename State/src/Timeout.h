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

  virtual void open(IContext* context);
  virtual void close(IContext* context);
  virtual void sendData(IContext* context);
  virtual void timeout(IContext* context);

 protected:
 private:
};

#endif  // TIMEOUT_H_
