#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int sum_of_squares(int number){
  if (number == 1)
    return 1;
  else
    return pow(number,2)+sum_of_squares(number-1);
}
int main() {
  // cout << "Enter upper limmit for summation: "<<endl;
  // cin >> summation_upper_limit;
  cout << "Result of the summation is: "<< endl;
  for (int summation_upper_limit = 1; summation_upper_limit<101; summation_upper_limit++)
    cout <<sum_of_squares(summation_upper_limit)<<endl;
  return 0;
}
