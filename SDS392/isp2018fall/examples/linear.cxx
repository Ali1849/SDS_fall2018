#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>

class Point {
private:
  float x,y;
public:
  Point( float x,float y) : x(x),y(y) {};
  // accessor, instead of direct access to member x
  float getx() { return x; };
};

class LinearFunction {
private:
  // NO!
  // Point p,q;
  // this is how you do it:
  float slope,intercept;
public:
  LinearFunction( Point p,Point q ) {
    slope = /* sorta like this, but better: (q.y-p.y)/(q.x-p.x) */ ; 
    intercept = /* whatever */ ;
  };
  float evaluate_at(float x) {
    return slope*x+intercept;
  };
};

int main() {
  return 0;
}
