/**
 * Singleton.h<br>
 * Copyright
 *
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_
#include <string>

class Singleton {
 public:
  static Singleton& getInstance();

  void sayHello();
  void setGreeting(std::string greeting);

 protected:
 private:
  //! Constractor
  Singleton();
  Singleton(Singleton&) {};
  //! Destructor
  virtual ~Singleton();
  Singleton& operator=(Singleton& s) { return s; };
  std::string greeting_;
};

#endif  // SINGLETON_H_
