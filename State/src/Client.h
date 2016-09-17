/**
 * Client.h<br>
 * Copyright
 *
 */

#ifndef CLIENT_H_
#define CLIENT_H_

class NetworkConnection;

class Client {
 public:
  //! Constractor
  Client();
  //! Destructor
  virtual ~Client();

  void run();

	NetworkConnection*& getConnection() {
		return connection_;
	}

	void setConnection(NetworkConnection* connection) {
		connection_ = connection;
	}

 protected:
  NetworkConnection* connection_;
 private:
};

#endif  // CLIENT_H_
