#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter a floating-point value: ";
  int n;
  cin >> n;
  //double double_n = n;
  cout << "n == " << n
          << "\nn+1 == " << n+1
          << "\nthree times n == " << 3*n
          << "\ntwice n == " << n+n
          << "\nn squared == " << n*n
          << "\nsquare root of n == " << sqrt(n)
          << endl; // End of Line '\n' と同じっぽいが・・・
}