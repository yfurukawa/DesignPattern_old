/**
 * TemplateClient.h<br>
 * Copyright
 *
 */

#ifndef TEMPLATECLIENT_H_
#define TEMPLATECLIENT_H_

class Cleaning;

class TemplateClient {
 public:
  //! Constractor
  TemplateClient();
  //! Destructor
  virtual ~TemplateClient();
  void run();

 protected:
 private:
  Cleaning* cleaner_;
};

#endif  // TEMPLATECLIENT_H_
