#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n1 = 11111; // 11111 in binary
  int n2 = 1011011101;
  
  int dec1 = 0, dec2 = 0;
  
  int i = 0, rem;

  //Converting n1 to decimal
  while (n1 != 0) {
    rem = n1 % 10;
    dec1 += rem * pow(2, i);
    n1 /= 10;
    i++;
  }

  //Converting n2 to decimal
  i = 0;
  while (n2 != 0) {
    rem = n2 % 10;
    dec2 += rem * pow(2, i);
    n2 /= 10;
    i++;
  }

  cout << "11111 (binary) = " << dec1 << " (decimal)" << endl;
  cout << "1011011101 (binary) = " << dec2 << " (decimal)" << endl;

  return 0;
}