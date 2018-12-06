#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int start_num , current_num, next_num, iteration_count, previous_max_iteration_count;
  previous_max_iteration_count = 0;
  for (start_num = 1; start_num < 1001; start_num++){
    current_num = start_num;
    iteration_count = 0;
    while (current_num>1){
      if (current_num%2 == 0){
	next_num = current_num/2;
      } else if (current_num%2 == 1){
	next_num = 3*current_num+1;
      }
      current_num = next_num;
      iteration_count += 1;
    }
    if (iteration_count > previous_max_iteration_count){
      cout << "start guess:  " << start_num << "  has "<<iteration_count<<" iterations!"<<endl;
    }
    if (iteration_count > previous_max_iteration_count){
      previous_max_iteration_count = iteration_count;
    }
  }
  cout<<"The longest length is: "<<previous_max_iteration_count<<endl;
  return 0;
}
