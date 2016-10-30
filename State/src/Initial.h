/**
 * Initial.h<br>
 * Copyright
 *
 */

#ifndef INITIAL_H_
#define INITIAL_H_

#include "NetworkState.h"

class Initial : public NetworkState {
 public:
  //! Constractor
  Initial();
  //! Destructor
  virtual ~Initial();

  virtual void open(IContext* context);
  virtual void close(IContext* context);
  virtual void sendData(IContext* context);
  virtual void timeout(IContext* context);

 protected:
 private:
};

#endif  // INITIAL_H_
