#include <iostream>
#include <cmath>
#include <vector>
#include <memory>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::make_shared;
class Node {
private:
  int datavalue{0};
  shared_ptr<Node> tail_ptr{nullptr};
public:
  Node() {}
  Node(int value) { datavalue = value; };
  int length() {
    if (tail_ptr==nullptr) return 1;
    else return 1+tail_ptr->length();
  };
  void set_tail( shared_ptr<Node> tail ) {
    tail_ptr = tail; };
  void print() {
    cout << datavalue;
    if (tail_ptr!=nullptr) {
      cout << ", "; tail_ptr->print();
    };
  };
  void append (shared_ptr<Node> tail){
    if (tail_ptr==nullptr)  tail_ptr = tail;
    else  tail_ptr->append(tail);
  };
};
int main() {
  auto
    first = make_shared<Node>(23),
    second = make_shared<Node>(45),
    third = make_shared<Node>(32);
  first->append(second);
  first->append(third);
  cout << "List length: "
       << first->length() << endl;
  first->print();
  cout << endl;
}
