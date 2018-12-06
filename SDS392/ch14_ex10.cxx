#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class pascal {
private:
  int rows;
  vector<long int>  coeffs;
public:
  pascal(int n){
    rows = n;
    coeffs = vector<long int>(n*(n+1)/2);
    for (int i=0; i<rows; i++){
      coeffs.at(i*(i+1)/2)=1;
      coeffs.at(i*(i+1)/2+i)=1;
      for (int j=1; j<i; j++){
	coeffs.at(i*(i+1)/2+j)=coeffs.at(i*(i-1)/2+j-1)+coeffs.at(i*(i-1)/2+j);
      };
    };
  };
  long int get(int i,int j) {
    return coeffs.at(i*(i+1)/2+j);
  };
  void print() {
    for (int i=0; i<rows; i++){
      for (int j=1; j<rows-i; j++){
	cout << " ";
      }
      for (int k = 0; k <= i; k++){
	cout << "  " << coeffs.at(i*(i+1)/2+k);
      }
      cout << endl;
    }
    cout << endl;
  };
  void print(int m) {
    for (int i=0; i<rows; i++){
      for (int j=1; j<rows-i; j++){
        cout << " ";
      }
      for (int k = 0; k <= i; k++){
        long int val = coeffs.at(i*(i+1)/2+k); 
	if ( val%m != 0 ){
        cout << " *";
	} else if ( val%m == 0 ){
	  cout << "  ";
	};
      };
      cout << endl;
    }
    cout << endl;
  };
};

int main(){
  int rows,m;
  cout << "Enter number of rows and m" << endl;
  cin >> rows >> m ;
  pascal p(rows);
  p.print();
  p.print(m);
}
