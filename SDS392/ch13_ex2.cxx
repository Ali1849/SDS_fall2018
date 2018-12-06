#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int s;
  string str;
  cout << "Enter an integer: ";
  cin >> s;
  cout << "Enter a string: ";
  cin >> str;
  for (char &c : str){
    if ( c + s > 'z'){
      c = c + s - 26;
    } else if ( c + s < 'a'){
      c = c + s + 26;
    } else {
      c = c + s;     
    };
  };
  cout << str << endl;
}
