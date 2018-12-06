#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>
#include <vector>
using std::vector;

int main() {
  vector<int> numbers = {1,-4000,2,-6,5};
  for ( int n : numbers ) {
    if (n<0) 
      // dangerous and wrong
      cout << abs(numbers[n]);
  }
  return 0;
}
