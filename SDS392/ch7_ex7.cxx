#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void rotatexy(int &x, int &y, int alpha){
  bool divisibility = false;
  remainder = number % divisor;
  if ( remainder == 0 ){
    divisibility = true;
  }
}
int main() {
  int number,divisor,remainder;
  cout << "Enter a number and a divisor: "<<endl;
  cin >> number >> divisor;
  if ( is_divisible(number,divisor,remainder)){
    cout << number << " is divisible by " << divisor << endl;
  } else {
    cout << number << "/" << divisor << " has remainder " << remainder << endl;
  }
  return 0;
}
