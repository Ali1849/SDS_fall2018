#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Point {
private:
  double px,py;
public:
  Point(){};
  Point( double x, double y ){
    px = x;
    py = y;
  };
  void setx( double newx ) {
    px = newx; };
  void sety( double newy ) {
    py = newy; };
  float distance_to_origin(){ return sqrt(px*px+py*py); };
  void printout(){ cout << "(" << px << "," << py << ")";};
  float angle(){ return atan(py/px); };
  float distance(Point q){return sqrt(pow(px-q.px,2)+pow(py-q.py,2));};
};
 


int main() {
  Point p1;
  Point q;
  cout << "Enter point p: "<< endl;
  cin >> p1.setx() >> p1.sety();
  cout << "Enter point q: "<< endl;
  cin >> q.setx() >> q.sety();
  cout << "P: "; p1.printout(); cout << endl;
  cout << "Distance from origin: " << p1.distance_to_origin() << endl;
  cout << "Angle with x-axis: " << p1.angle() << endl;
  cout << "Distance form point "; q.printout(); cout << ": " << p1.distance(q) << endl;
  return 0;
}
