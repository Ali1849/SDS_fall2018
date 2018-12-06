#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::setbase;
using std::setfill;
using std::setw;
using std::left;

int main() {
  double a = 1.345, b = 23.789, c = 456.1234;
  cout << setw(4) << floor(a) << "_"  <<  left << setw(4) << a - floor(a) << endl;

}
