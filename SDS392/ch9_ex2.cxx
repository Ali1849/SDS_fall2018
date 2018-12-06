#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct vector {double x; double y;};
void vector_component_swap (struct vector &v){
  //double temp = v.x;
  //v.x = v.y;
  //v.y = temp;
  v = {v.y,v.x};
} 

int main() {
  struct vector a;
  cout << " Enter vector components:" << endl;
  cin >> a.x >> a.y;
  cout << "Input vector is (" << a.x << "," << a.y << ")" << endl;
  vector_component_swap(a);
  cout << "Output vector is (" << a.x << "," << a.y << ")" << endl;
  return 0;
}
