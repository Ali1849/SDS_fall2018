#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct vector {double x; double y;};
double  angle_with_x_axis (struct vector v){
  double angle;
  angle = atan(v.y/v.x);
  return angle;
} 

int main() {
  struct vector a;
  cout << " Enter vector components:" << endl;
  cin >> a.x >> a.y;
  cout << a << endl;
  double alpha = angle_with_x_axis(a);
  double pifrac = (4.*atan(1.0)) / alpha;
  cout << "Angle of (" << a.x << "," << a.y <<") is " << alpha << " or pi/" << pifrac << endl;
  return 0;
}
