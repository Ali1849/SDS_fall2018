#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  for (int i=1 ; i<11 ; i++){
    for (int j=i-1 ; j<i+2 and j<11  ; j++){
      // if (abs(i-j)<2){
      cout << "("<<i<<","<<j<<") , ";
      //}
    }
    cout<<""<<endl;
  }
}
