#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct vector {double x; double y;};
struct vector  vector_scale_components (struct vector v, double a){
  v = {a*v.x,a*v.y};
  return v;
} 

int main() {
  struct vector v;
  double a;
  cout << "Enter vector components:" << endl;
  cin >> v.x >> v.y;
  cout << "Enter an scaler:" << endl;
  cin >> a;
  cout << "Input vector is (" << v.x << "," << v.y << ")" << endl;
  v = vector_scale_components(v,a);
  cout << "Output vector is (" << v.x << "," << v.y << ")" << endl;
  return 0;
}
