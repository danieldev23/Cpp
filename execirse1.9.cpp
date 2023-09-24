#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string convertHexToBinary(string hex) {
  int dec = 0;
  
  for(int i=0; i<hex.length(); i++) {
    if(hex[i] >= '0' && hex[i] <= '9') {
      dec = dec * 16 + (hex[i] - '0');
    }
    else if(hex[i] >= 'A' && hex[i] <= 'F') {
      dec = dec * 16 + (hex[i] - 'A' + 10); 
    }
  }

  string binary = "";
  
  while(dec != 0) {
    binary = to_string(dec % 2) + binary;
    dec /= 2;
  }

  return binary;  
}

int main() {
  string hex1 = "ABC7", hex2 = "1789A";
  
  cout << hex1 << " (hex) = " << convertHexToBinary(hex1) << " (binary)" << endl;
  cout << hex2 << " (hex) = " << convertHexToBinary(hex2) << " (binary)" << endl;

  return 0;
}
