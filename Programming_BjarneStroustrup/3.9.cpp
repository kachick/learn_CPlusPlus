#include "std_lib_facilities.h"

int main()
{
  double x; // ここが未定義なために、以降でもなーんもチェックされない、怖い
  double y = x;
  double z = 2.0+x;
  cout << x << '\n' // 6.95321e-310
       << y << '\n' // 6.95321e-310
       << z << '\n'; // 2
}