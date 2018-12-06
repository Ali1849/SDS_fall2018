#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

bool is_prime(int n) {
  bool prime_test = true;
  if (n == 1) {prime_test = false;};
  for (int i = 2; i<n and prime_test; i++){
    if (n%i == 0){
      prime_test = false;
    }
  }
  return prime_test;
}

class PrimeGenerator {
private: 
  int how_many_primes_found, last_number_tested; 
public:
  PrimeGenerator (int number_of_primes_found, int last_number_tested) {
    how_many_primes_found = number_of_primes_found;
    last_number_tested = last_number_tested;
  };
  int nextprime (){
    do {
      last_number_tested ++;
    } while(!is_prime(last_number_tested));
    how_many_primes_found ++;
  return last_number_tested;
  };
  int number_of_primes_found () { return how_many_primes_found; };
};

int main(){
  int number_of_primes;
  cout << "Enter number of primes:" << endl;
  cin >> number_of_primes;
  PrimeGenerator sequence = {0,1};
  while ( sequence.number_of_primes_found() < number_of_primes ){
    int number = sequence.nextprime();
    cout << "Number " << number << " is prime." << endl;
  }
  return 0;
}

