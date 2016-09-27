/**
 * StrategyClient.h<br>
 * Copyright
 *
 */

#ifndef STRATEGYCLIENT_H_
#define STRATEGYCLIENT_H_

class Cleaning;

class StrategyClient {
 public:
  //! Constractor
  StrategyClient();
  //! Destructor
  virtual ~StrategyClient();
  void run();

 protected:
 private:
  Cleaning* cleaner_;
};

#endif  // STRATEGYCLIENT_H_
