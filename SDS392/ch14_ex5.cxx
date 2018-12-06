#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

float compute_l2_norm( vector<float> v ){
  float l2_norm = 0;
  for ( auto i : v ){
    l2_norm += i*i; 
  };
  l2_norm = sqrt(l2_norm);
  return l2_norm;
};


int main() {
  float l2_norm, scale;
  vector <float> x = {1,1,1,1};
  l2_norm = compute_l2_norm( x ); 
  scale = 1/l2_norm;
  cout << "L2 norm before normalization:  " << l2_norm << endl;
  cout << "Scaling factor = " << scale << endl;
  for ( auto &i : x){
    i *= scale;
  };
  l2_norm = compute_l2_norm(x); 
  cout << "L2 norm after normalization:  " << l2_norm << endl; 
  return 0;
}

