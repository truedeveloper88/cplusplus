#include "../std_lib_facilities.h"

int main() 
{
  string first_name;
  string another_friend_name;
  char male = 'm';
  char female = 'f';
  char friend_sex = 0;
  int age;


  cout << "Enter the name of the person you want to write to:\n";
  cin >> first_name;
  cout << "Dear " + first_name + ",\n"
        << "\tHow are you? I am fine. I miss you!\n";
  cout << "Enter another name?\n";
  cin >> another_friend_name;
  cout << "Please tell me your friend's sex: \n";
  
  while (true) {
    cin >> friend_sex;
    if (friend_sex == male || friend_sex == female) {
      break;
    }
    cout << "Please enter a valid sex (m|f)\n";
    continue;
  }
  if (friend_sex == male)
    cout << another_friend_name + " is " + " a man\n";
  else
    cout << another_friend_name + " is " + " a woman\n";
  cout << "Enter your age\n";

  while (true) {
    cin >> age;
    if (age > 0 && age <= 110) {
      cout << "your age is " << age << "\n";
      break;
    }  

    cout << "Don't fuck with me\n"
      << "Please enter a valid age (1-110)\n"; 
  }
  return 0;
}