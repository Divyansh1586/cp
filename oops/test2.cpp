#include <iostream>

using namespace std;

class c {
public:
  void method() { cout << "sup gng" << endl; }
  int sum(int a, int b);
};

// to declare a function outside of
// a class we need to first declare its definition
// within first, we can complete the definition outside

int c::sum(int x, int y) { return x + y; }

int main() {
  c obj;
  obj.method();

  cout << obj.sum(3, 5) << endl;
}
