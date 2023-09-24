#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string convertDecimalToHex(int n) {
  int rem;
  string hex = "";
  
  char hexChars[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

  while(n != 0) {
    rem = n % 16;
    hex = hexChars[rem] + hex; 
    n /= 16;
  }

  return hex;
}

int main() {
  int n1 = 2020;
  double n2 = 172.983;

  cout << n1 << " (decimal) = " << convertDecimalToHex(n1) << " (hex)" << endl;

  int intPart = (int)n2;
  double fracPart = n2 - intPart;

  cout << n2 << " (decimal) = " << convertDecimalToHex(intPart) << ".";
  cout << convertDecimalToHex((int)(fracPart * 16)) << " (hex)" << endl;
  
  return 0;
}
