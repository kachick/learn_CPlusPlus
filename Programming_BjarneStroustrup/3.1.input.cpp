// ファーストネームの読み取りと書き込み
#include "std_lib_facilities.h"
int main()
{
  cout << "Please enter your first name (followed by 'enter'):\n";
  string first_name;
  cin >> first_name; // cin = c + in = character input
  cout << "Hello, " << first_name << "!\n";
}