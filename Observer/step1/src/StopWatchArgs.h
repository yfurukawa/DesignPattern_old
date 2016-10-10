/**
 * StopWatchArgs.h<br>
 * Copyright
 *
 */

#ifndef STOPWATCHARGS_H_
#define STOPWATCHARGS_H_

class StopWatchArgs {
 public:
  //! Constractor
  StopWatchArgs();
  //! Destructor
  virtual ~StopWatchArgs();
    int GetSeconds() const;
    void SetSeconds( int seconds );

 protected:
 private:
  int seconds;
};

#endif  // STOPWATCHARGS_H_
