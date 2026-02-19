#include <iostream>
using namespace std;

class animal {
public:
  virtual void speak() = 0;
};

class dog : public animal {
public:
  void speak() override { cout << "dogg \n"; }
};

int main() {
  animal *a = new dog();
  a->speak();
}
