#include "std_lib_facilities.h"

int Main() // In function ‘int Main()’:
{
  STRING s = "Goodbye cruel world! "; // ‘STRING’ was not declared in this scope
                                      // error: expected `;' before ‘s’
  cOut << S << '\n'; // error: ‘cOut’ was not declared in this scope
                     // error: ‘S’ was not declared in this scope
}