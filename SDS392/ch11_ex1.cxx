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

class Rectangle {
private: 
  Point BL_point;
  float w, h ;
public:
  Rectangle ( Point bl, float wi, float he) { BL_point = bl; w = wi; h = he; };
  Rectangle ( Point bl, Point tr) { BL_point = bl; w = tr.px() - bl.px(); h = tr.py() - bl.py(); };
  float area () { return w*h; };
  float width () { return w; }; 
  float height () { return h; };
};


int main() {
  float bl_x, bl_y, tr_x, tr_y, wi, he;
  Point bl;
  Point tr;
  cout << "Enter (x,y) of bl: " << endl;
  cin >> bl_x >> bl_y ;
  bl.setp(bl_x,bl_y);
  cout << "Enter width: " << endl;
  cin >> wi;
  cout << "Enter height: " << endl;
  cin >> he;
  cout << "Enter (x,y) of p2: " << endl;
  cin >> tr_x >> tr_y ;
  tr.setp(tr_x,tr_y);
  
  Rectangle Rect1(bl,wi,he);
  cout << "Using first constructer: ";
  cout << "Area: " << Rect1.area() << endl;
  cout << "Width: " << Rect1.width() << endl;
  cout << "Height: " << Rect1.height() << endl;

  Rectangle Rect2(bl,tr);
  cout << "Using second constructer: ";
  cout << "Area: " << Rect2.area() << endl;
  cout << "Width: " << Rect2.width() << endl;
  cout << "Height: " << Rect2.height() << endl;
  return 0;
}
