#include <iostream>
#include <boost/regex.hpp>

using namespace std;

int main(int argc, const char* argv[]) {

  std::cout << "Hello, World" << endl;
  boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );
  
  return 0;
}