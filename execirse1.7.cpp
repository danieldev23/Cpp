#include <iostream>
#include <math.h>

using namespace std;

int convertDecimalToBinary(int n) {
  int binary = 0;
  int i = 0, rem;

  while (n != 0) {
    rem = n % 2;
    binary += rem * pow(10, i);
    n /= 2;
    i++;
  }

  return binary;
}

int main() {
  int n1 = 1256, n2 = 10988;

  cout << n1 << " (decimal) = " << convertDecimalToBinary(n1) << " (binary)" << endl;
  cout << n2 << " (decimal) = " << convertDecimalToBinary(n2) << " (binary)" << endl;

  return 0;
}