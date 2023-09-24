#include <iostream>
using namespace std;

int main() {
  int n, i;
  cout << "Enter upper limit: ";
  cin >> n;

  cout << "Even numbers from 1 to " << n << " are: ";
  for(i=1; i<=n; i++) {
    if(i%2 == 0) {
      cout << i << " "; 
    }
  }

  return 0;
}