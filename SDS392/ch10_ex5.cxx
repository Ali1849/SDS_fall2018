#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Point {
private:
  float x,y;
public:
  Point () {};
  Point ( float x, float y ) : x(x), y(y){};
  float px() { return x; };
  float py() { return y; };
  void setp (float newx, float newy) {x = newx; y = newy;}; 
};

class LinearFunction {
private: 
  float a,b;
public:
  LinearFunction ( Point p1, Point p2 ) {
    a = (p2.py() - p1.py())/(p2.px() - p1.px());
    b = p1.py() - a*p1.px();
  };
  LinearFunction (Point p1) {
    a = p1.py()/p1.px();
    b = 0;
  };
  float evaluate_at ( float x ){
    return a*x+b;
  };
};


int main() {
  float x, p1x, p1y, p2x, p2y;
  Point p1;
  Point p2;
  cout << "Enter (x,y) of p1: " << endl;
  cin >> p1x >> p1y ;
  p1.setp(p1x,p1y);
  cout << "Enter (x,y) of p2: " << endl;
  cin >> p2x >> p2y ;
  p2.setp(p2x,p2y);
  LinearFunction line(p1);
  cout << "Enter x: ";
  cin >> x;
  cout << "y component of the point is: " << line.evaluate_at(x) << endl;
  return 0;
}
