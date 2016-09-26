/**
 * FacadeClient.h<br>
 * Copyright
 *
 */

#ifndef FACADECLIENT_H_
#define FACADECLIENT_H_

class Facade;

class FacadeClient {
 public:
  //! Constractor
  FacadeClient();
  //! Destructor
  virtual ~FacadeClient();
  void run();

 protected:
 private:
  Facade* facade;
};

#endif  // FACADECLIENT_H_
