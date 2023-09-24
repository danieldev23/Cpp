#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string convertBinaryToHex(string binary) {
  int dec = 0;
  int i = 0, rem;

  while (binary != "") {
    rem = binary[binary.length() - 1] - '0';
    dec += rem * pow(2, i);
    binary.pop_back();
    i++;
  }
  
  string hex = "";
  char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

  while (dec != 0) {
    rem = dec % 16;
    hex = hexChars[rem] + hex; 
    dec /= 16;
  }

  return hex;
}

int main() {
  string bin1 = "10011001", bin2 = "1101101111110101";

  cout << bin1 << " (binary) = " << convertBinaryToHex(bin1) << " (hex)" << endl;
  cout << bin2 << " (binary) = " << convertBinaryToHex(bin2) << " (hex)" << endl;

  return 0;
}
