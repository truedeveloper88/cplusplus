#include "../std_lib_facilities.h"

int main() 
{
  cout << "Please enter your name and age?\n";
  string name = "???";
  double age = 0.0;
  cin >> name >> age;
  age *= 12;
  cout << name << " " << age << "!\n";
  return 0;
}