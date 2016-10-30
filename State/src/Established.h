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

  virtual void open(IContext* context);
  virtual void close(IContext* context);
  virtual void sendData(IContext* context);
  virtual void timeout(IContext* context);
 protected:
 private:
};

#endif  // ESTABLISHED_H_
