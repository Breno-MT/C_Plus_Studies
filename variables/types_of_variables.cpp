/* Character types: They can represent a single character, such as 'A' or '$'. The most basic type is char, which is a one-byte character.
Other types are also provided for wider characters.

Numerical integer types: They can store a whole number value, such as 7 or 1024. They exist in a variety of sizes,
and can either be signed or unsigned, depending on whether they support negative values or not.

Floating-point types: They can represent real values, such as 3.14 or 0.01, with different levels of precision,
depending on which of the three floating-point types is used.

Boolean type: The boolean type, known in C++ as bool, can only represent one of two states, true or false.
*/

#include <iostream>

using namespace std;

int main ()
{
  // declaring variables:
  int a, b, result;

  // others way to declare
  /*
  int a=5;               // initial value: 5
  int b(3);              // initial value: 3
  int c{2};              // initial value: 2
  */

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << result;

  // terminate the program:
  return 0;
}