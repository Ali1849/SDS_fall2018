#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool is_prime(int n) {
  bool prime_test = true;
  if (n == 1) {prime_test = false;};
  for (int i = 2; i<n and prime_test; i++){
    if (n%i == 0){
      prime_test = false;
    };
  };
  return prime_test;
};

class PrimeGenerator {
private: 
  int how_many_primes_found = 0, last_number_tested = 1; 
public:
  // PrimeGenerator (int number_of_primes_found, int last_number_tested) {
  // how_many_primes_found = ;
  // last_number_tested = last_number_tested;
  //};
  void reset () { how_many_primes_found = 0, last_number_tested = 1; };
  int number_of_primes_found () { return how_many_primes_found; };
  int last_prime_number() {return last_number_tested; };
  int nextprime (){
    do {
      last_number_tested ++;
    } while ( !is_prime ( last_number_tested ) );
    how_many_primes_found ++;
    return last_number_tested;
  };
};

int main(){
  int even_numbers_bound;
  cout << "Enter the bound for even numbers:" << endl;
  cin >> even_numbers_bound;
  for ( int e = 4; e <= even_numbers_bound; e += 2 ){
    PrimeGenerator sequence; 
    cout << e << "-------------------------"  << endl;
    while ( sequence.last_prime_number() <= e){
      int p = sequence.nextprime();
      cout << p << endl;
      if ( is_prime ( e - p ) and  p < e){
	cout << e << " = " << p << " + " << e - p << endl;
	break;
      };
    };
    // sequence.reset();
  };
  return 0;
}

