#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
  string text = "";
  fstream inputStream;
  
  inputStream.open("user.txt");

  while (inputStream >> text) {
    cout << text << endl;
  }
  
  inputStream.close();
  return 0;
}