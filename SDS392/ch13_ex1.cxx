#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  char ch;
  cout << "Enter an integer: ";
  cin >> n;
  if ( n > 0 ){
    ch = n+96;
    cout << n << "  :  "  << ch << endl;
  };
  if ( n < 0 ){
    ch = -n + 64;
    cout << n << "  :  "  << ch << endl;
  };
}
