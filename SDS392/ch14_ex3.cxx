#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  float l2_norm = 0, scale = 1;
  vector <float> y(5,0), x = {1,-4,2,-6,5};
  cout << "Before normalization: " << endl; 
  for ( int i=0; i < x.size(); i++){
    l2_norm += x.at(i)*x.at(i); 
    cout << x.at(i) << endl;
  };
  scale = sqrt(1/l2_norm);
  cout << "L2 norm = " << l2_norm << endl;
  cout << "Scaling factor = " << scale << endl;
  cout << "After normalization: " << endl;
  l2_norm = 0;
  for ( int i=0; i < x.size(); i++){
    y.at(i) = x.at(i)*scale ;
    cout << y.at(i) << endl;
    l2_norm += y.at(i)*y.at(i); 
  };
  cout << "L2 norm = " << l2_norm << endl; 
  return 0;
}

