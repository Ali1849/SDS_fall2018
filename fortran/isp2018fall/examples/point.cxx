#include <iostream>
using std::cout;
using std::endl;
#include <cmath>

class Point {
private:
  float x,y;
public:
  Point(float xx,float yy) { x = xx; y = yy; };
  void printout() { cout << x << endl; };
  float xcoordinate() { return x; };
  float distance(Point other) {
    float dx = x-other.x;
    // alternative:
    // float dx = x-other.xcoordinate();
    float dy = y-other.y;
    return sqrt( dx*dx + dy*dy );
  };
};

int main() {
  Point p(1,2),q(3,4);
  // Illegal:
  // cout << p.x;
  // Also illegal:
  // p.x = 5;
  // However, legal:
  cout << "x=" << p.xcoordinate() << endl;
  float d = p.distance(q);
  cout << "dist=" << d << endl;

}

