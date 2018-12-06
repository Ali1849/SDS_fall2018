#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;




int main() {
  int maxabs, i, index;
  vector <int> numbers = {1,-4,2,-6,5};
  maxabs = 0;
  i = 0;
  for ( auto num : numbers){
    if ( abs(num) > maxabs ){
      maxabs = abs( num );
      index = i;
    };
    i++;
  };
  cout << numbers.at(index) << endl;
  return 0;
}

