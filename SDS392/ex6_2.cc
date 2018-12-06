#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int num,counter,divisor;
  cout << "Give a number: /n" << endl;
  cin >> num;
  counter  = 0;
  bool found_a_divisor = false;
  for (int i=2;i<(num/2)+1 and not found_a_divisor;i++){
    if (num%i == 0){
      found_a_divisor = true;
      divisor = i;
      counter += 1;
      // cout << "Your number is not prime: it is divisible by "<< divisor << endl;
    }
  }
  if (counter == 0){
    cout << "Your number is prime" << endl;
  } else {
    cout << "Your number is not prime: it is divisible by "<< divisor << endl;
  }
}
