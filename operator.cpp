#include <iostream>
using namespace std;

/* C++ arithmetic operators formatting: 

+: +
-: -
x: *
÷: /

Example:
normal | C++
1+1      1+1
1-1      1-1
2x1      2*1
2÷1      2/1

C++ compound assignment operator formatting

Example:
a += b : a = a + b
a -= b : a = a - b
a *= b : a = a * b
a %= b : a = a % b
*/

// Usage:
int main() {
  // Arithmetic operators
  cout << "1+1 = " << 1+1 << endl; // Output: 1+1 = 2
  cout << "1-1 = " << 1-1 << endl; // Output: 1-1 = 0
  cout << "2x5 = " << 2*5 << endl; // Output: 2x5 = 10
  cout << "10÷2 = " << 10/2 << endl; // Output; 10÷2 = 5
  cout << "10%3 = " << 10%3 << endl; // Output: 10%3 = 1 (The remainder of 10÷3)

  // Compound assignment operators
  int a = 1;
  int b = 2;

  a += 1
  cout << "A += 1 = " << a << endl; // 2
  a = 1 // reset a to 1

  a = a + 1
  cout << "A = A + 1 = " << a << endl; // 2
  a = 1 // reset a to 1

  a -= 1
  cout << "A -= 1 = " << a << endl; // 0
  a = 1 // reset a to 1

  a = a - 1
  cout << "A = A - 1 = " << a << endl; // 0
  a = 1 // reset a to 1

  b *= 5
  cout << "B *= 1 = " << b << endl; // 10
  b = 2 // reset b to 2

  b = b * 5
  cout << "B = B * 1 = " << b << endl; // 10
  b = 10 // set b to 10

  b /= 5
  cout << "B /= 1 = " << b << endl; // 2
  
  b = 10 // reset b to 10

  b = b / 5
  cout << "B = B / 1 = " << b << endl; // 2

  cout << "Run Successfull!" << endl;
  return 0; // End program
}
