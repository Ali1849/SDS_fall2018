#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>
#include <vector>
using std::vector;

int main() {
  vector<int> numbers = {1,-4,2,-6,5};

  // this notation means:
  // for all n in the set of numbers
  for ( int n : numbers ) 
    cout << n << endl;
  return 0;
}
