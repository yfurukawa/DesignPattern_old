/**
 * IContext.h<br>
 * Copyright
 *
 */

#ifndef ICONTEXT_H_
#define ICONTEXT_H_

class NetworkState;

class IContext {
 public:
  //! Constractor
  IContext();
  //! Destructor
  virtual ~IContext() = 0;

  virtual void updateState(NetworkState* state) = 0;
 protected:
 private:
};

#endif  // ICONTEXT_H_
