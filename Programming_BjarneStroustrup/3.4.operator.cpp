#include "std_lib_facilities.h"

int main()
{
  int count;
  cin >> count;

  string name;
  cin >> name;

  int c2 = count+2;
  string s2 = name + " Jr. ";

  int c3 = count-2;
  //string s3 = name - "Jr. "; // string にマイナスなんて定義されてないので、これはエラー
}