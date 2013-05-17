#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first and second names and age\n";
  string first_name;
  string second_name;
  double age;
  cin >> first_name >> second_name >> age;
  double the_age_of_the_moon = age * 12;
  cout << "Hello, " << first_name << second_name << " (age " << the_age_of_the_moon << ")\n";
}