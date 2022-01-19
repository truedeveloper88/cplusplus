#include "../std_lib_facilities.h"

int main()
{
  // const double euro_per_dollar = 0.88;
  // cout << "Please enter a monetary amount followed by a conversion(eu)\n";
  // string unit = "";
  // double amount = 1;
  // cin >> amount >> unit;
  // if (unit == "eu")
  //   cout << "Dollar amount is " << amount * euro_per_dollar << " dollar!\n";
  // else if (unit == "d")
  //   cout << "Euro amount is " << amount / euro_per_dollar <<  " euro!\n";
  // else
  //   cout << "Please enter a correct unit\n";
  const double cm_per_inch = 2.54;
  double length = 1;
  char unit = 0;
  cout << "Enter a length followed by a unit (c or i)\n";
  cin >> length >> unit;
  switch (unit) {
    case 'i':
      cout << length << " in == " << length * cm_per_inch << " cm\n";
      break;
    case 'c':
      cout << length << " cm == " << length / cm_per_inch << " in\n";
      break;
    default:
      cout << "Please enter a correct unit\n";
      break;
  }
}