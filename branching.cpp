#include <iostream>
using namespace std;

int main() {
  int example = 36; // define example to test

  if (example==36) {
    cout << "output 1" << endl; // execute when condition is true
  }
  else if (example > 67) {
    cout << "output 2" << endl; // execute when condition 1 is false and example larger than 67
  }
  else {
    cout << "output 3" << endl; // execute when no condition is true
  }
  cout << "Code run Successfully!" << endl;

  return 0; // End program
}
