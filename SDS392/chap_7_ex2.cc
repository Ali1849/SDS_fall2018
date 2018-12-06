#include <iostream>

using std::cin;
using std::cout;
using std::endl;


bool  primality_test(int n) {
  bool prime_test = true;
  for (int i = 2; i<n and prime_test; i++){
    if (n%i == 0){
      prime_test = false;
    }
  }
  return prime_test;
}
int main() {
  int num;
  bool is_prime;
  cout << "Enter a number " << endl;
  cin >> num;
  for (int i=2; i<num+1; i++){
    is_prime = primality_test(i);
    if (is_prime){
      cout << i  << " is prime." <<endl;
    }  
  }
  //else{
  // cout << num << " is not prime." <<endl;
  // } 
  return 0;
}
