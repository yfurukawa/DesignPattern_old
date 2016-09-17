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

  virtual void open();
  virtual void close();
  virtual void sendData();
  virtual void timeout();

 protected:
 private:
};

#endif  // INITIAL_H_
