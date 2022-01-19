#include "../std_lib_facilities.h"

int main()
{
  char c = 'a';
  while (c <= 'z') {
    cout << c << " " << int(c) << "\n";
    ++c;
  }
  for (c = 'a'; c <= 'z'; ++c) {
    cout << c << " " << int(c) << "\n";
  }
  return 0;
}