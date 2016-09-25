/**
 * BridgeClient.h<br>
 * Copyright
 *
 */

#ifndef BRIDGECLIENT_H_
#define BRIDGECLIENT_H_
#include <list>

class Shape;

class BridgeClient {
 public:
  //! Constractor
	BridgeClient();
  //! Destructor
  virtual ~BridgeClient();
  void run();

 protected:
 private:
  std::list<Shape*> shape;
};

#endif  // BRIDGECLIENT_H_
