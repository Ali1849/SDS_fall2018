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
  vector<vector<long int>>  coeffs;
public:
  pascal(int n){
    rows = n;
    coeffs = vector<vector<long int>>(n,vector<long int>(n));
    for (int i=0; i<rows; i++){
      coeffs.at(i).at(0)=1;
      coeffs.at(i).at(i)=1;
      for (int j=1; j<i; j++){
	coeffs.at(i).at(j)=coeffs.at(i-1).at(j-1)+coeffs.at(i-1).at(j);
      };
    };
  };
  long int get(int i,int j) {
    return coeffs.at(i).at(j);
  };
  void print() {
    for (int i=0; i<rows; i++){
      for (int j=1; j<rows-i; j++){
	cout << " ";
      }
      for (int k = 0; k <= i; k++){
	cout << "  " << coeffs.at(i).at(k);
      }
      cout << endl;
    }
    cout << endl;
  };
  void print(int m) {
    for (int i=0; i<rows; i++){
      cout << "Row " << i << ": "; 
      for (int j=1; j<rows-i; j++){
        cout << " ";
      }
      for (int k = 0; k <= i; k++){
	long int val = coeffs.at(i).at(k); 
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
  long int a = p.get(34,17);
  cout << a << endl;
  int b;
  b = a%m;
  cout << b;
}
