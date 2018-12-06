#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>

// just to prevent accidents,
// include the header here too
#include "header1.h"

foo::foo(int i,int j) {
  cout << "constructing with "
       << i << j << endl;
};

void f(int i,int j) { 
  
  int x = j+i;
  cout << x << endl;
}
 
