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
  protected: 
  //private:
  Point BL_point;
  float w, h ;
public:
  Rectangle ( Point bl, float wi, float he) { BL_point = bl; w = wi; h = he; };
  Rectangle ( Point bl, Point tr) { BL_point = bl; w = tr.px() - bl.px(); h = tr.py() - bl.py(); };
  float area () { return w*h; };
  float width () { return w; }; 
  float height () { return h; };
};

class Square : public Rectangle{
public: 
  Square (Point bl, float s) : Rectangle ( bl, s, s) {}; 
};


int main() {
  float bl_x, bl_y, tr_x, tr_y, width, height, side;
  Point bl;
  Point tr;
  cout << "Enter (x,y) of bottom left vertex: " << endl;
  cin >> bl_x >> bl_y ;
  bl.setp(bl_x,bl_y);
  cout << "Enter width: " << endl;
  cin >> width;
  cout << "Enter height: " << endl;
  cin >> height;
  cout << "Enter square side: " << endl;
  cin >> side;
  cout << "Enter (x,y) of top right vertex: " << endl;
  cin >> tr_x >> tr_y ;
  tr.setp(tr_x,tr_y);
  
  Rectangle Rect1(bl,width,height);
  cout << "Using Rectangle class with first constructer: " << endl;
  cout << "Area: " << Rect1.area() << endl;
  cout << "Width: " << Rect1.width() << endl;
  cout << "Height: " << Rect1.height() << endl;

  Rectangle Rect2(bl,tr);
  cout << "Using Rectangle class with second constructer: " << endl;
  cout << "Area: " << Rect2.area() << endl;
  cout << "Width: " << Rect2.width() << endl;
  cout << "Height: " << Rect2.height() << endl;
 
  Square Sq1(bl,side);
  cout << "Using Square class: " << endl;  
  cout << "Area: " << Sq1.area() << endl;

  return 0;
}
