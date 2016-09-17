#include "Client.h"
#include "NetworkConnection.h"

int main(int argc, char* argv[]) {

  Client client;
  client.setConnection(new NetworkConnection());
  client.run();
  return 0;
}

