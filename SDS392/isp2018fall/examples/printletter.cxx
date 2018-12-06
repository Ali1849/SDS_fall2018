#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>

int main() {
  int charnum;
  cin >> charnum;
  if (charnum>0) {
    char letter = 'a'+charnum-1;
    cout << letter << endl;
  } else if (charnum<0) {
    char letter = 'A'+(-charnum)-1;
    cout << letter << endl;
  }

  return 0;
}
