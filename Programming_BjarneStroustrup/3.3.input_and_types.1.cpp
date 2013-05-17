#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and age\n";
  string first_name;
  int age;
  cin >> first_name; // この >> 使った入力だと、 "foo bar" みたいな空白分けの1つ目だけをとる。キモい
  cin >> age; // なのでまぁ、 "foo 22" みたいな入力なら22がageに入る。
              // で、 "foo bar"とかだとageがバグる。（0とか） "12 34"みたいなんなら、まぁ通る
  cout << "Hello, " << first_name << " (age " << age << ")\n";
}