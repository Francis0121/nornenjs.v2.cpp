#include "rapidjson/document.h"
#include <websocketpp.hpp>
#include <iostream>
#include <boost/regex.hpp>

using namespace std;

int main(int argc, const char* argv[]) {

  std::cout << "Hello, World" << endl;
  boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );

  const char json[] = "{ \"hello\" : \"world\" }";

  rapidjson::Document d;
  d.Parse<0>(json);

  printf("%s\n", d["hello"].GetString());

  return 0;
}