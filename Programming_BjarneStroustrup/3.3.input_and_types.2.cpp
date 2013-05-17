#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and age\n";
  string first_name = "???";
  int age = -1;
  cin >> first_name >> age; // 2度cinと同義。coutでも出てきた話
  cout << "Hello, " << first_name << " (age " << age << ")\n"; // "foo bar" みたいな入力時、こんどは0とかじゃなく -1 が出る。
                                                               // ということで、やっぱ0が入力されたというわけではないんやねという・・・うーん
}