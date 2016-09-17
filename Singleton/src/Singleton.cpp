/*
 * Copyright
 *
*/
#include <iostream>
#include "./Singleton.h"

Singleton::Singleton() : greeting_("") {
}

Singleton::~Singleton() {
}

static Singleton& Singleton::getInstance() {
  static Singleton own_;
  return own_;
}

void Singleton::sayHello() {
  std::cout << "Hello World!" << std::endl;
  std::cout << greeting_ << std::endl;
}

void Singleton::setGreeting(std::string greeting) {
  greeting_ = greeting;
}

