#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swapij(int &i,int&j){
  int temp=i;
  i = j;
  j = temp;
}
int main() {
  int i = 2, j = 3;
  cout << "Before Swap: (i,j) = (" <<i<<","<<j<<")"<<endl;
  swapij(i,j);
  cout << "After Swap:  (i,j) = (" <<i<<","<<j<<")"<<endl;
  return 0;
}
