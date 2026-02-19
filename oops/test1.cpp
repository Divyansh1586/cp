#include <iostream>

using namespace std;

class c {
public:
  int num;
  string s;
};

int main() {
  c obj;

  obj.num = 15;
  obj.s = "text";

  cout << obj.num << endl;
  cout << obj.s << endl;
}
