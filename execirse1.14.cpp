#include <iostream>
using namespace std;

int main() {
  int n, i, sum=0;
  cout << "Enter upper limit: ";
  cin >> n;

  for(i=1; i<=n; i=i+2) {
    sum += i;
  }

  cout << "Sum = " << sum;
  
  return 0;
}