#include <iostream>
using namespace std;

int main() {
  int n1 = 0, n2 = 1, nextTerm;

  cout << "Fibonacci Series: ";

  cout << n1 << " " << n2 << " "; 
  nextTerm = n1 + n2;

  while(nextTerm <= 1000) {
    cout << nextTerm << " ";
    n1 = n2;
    n2 = nextTerm;  
    nextTerm = n1 + n2;
  }

  return 0;
}