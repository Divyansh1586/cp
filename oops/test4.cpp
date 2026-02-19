#include <iostream>
using namespace std;

// without virtual keyword it will print Animal
// but will print dog if virtual keyword is used
class Animal {
public:
  virtual void speak() { cout << "Animal speaks" << endl; }
  virtual ~Animal() { cout << "Animal destroyed\n"; }
};

class Dog : public Animal {
public:
  void speak() { cout << "Dog speaks" << endl; }
};

int main() {
  Animal *a = new Dog();
  a->speak();
  delete a;
}

// always need a virtual destructor to prevent memory leaks
