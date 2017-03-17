#include "client.hpp"

int main()
{
  yadisk::client client("token");
  client.unpublish("http://hostname/path/to/file.dat");
}
