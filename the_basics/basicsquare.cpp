#include "../std_lib_facilities.h"

int square(int x)
{
  int result = 0;
  for (int i = 0; i < x; ++i) {
    result += x;
  }  
  return result;
}


int main()
{
 cout << square(10) << "\n";
 cout << square(2) << "\n";
 cout << square(3) << "\n";
 
 return 0; 
}