#include <iostream>
using namespace std;

// Hybrid Inheritance with example

class A {
public:
void display() {
cout << "Class A" << endl;
}

void HelloFromA() {
cout << "Hello from A" << endl;
}
};

class B: public A {
public:
void display() {
cout << "Class B" << endl;
}

void helloFromB() {
cout << "Hello from B" << endl;
}
};

class C: public A {
public:
void display() {
cout << "Class C" << endl;
}

void helloFromC() {
cout << "Hello from C" << endl;
}
};

class D: public B, public C {
public:
void display() {
cout << "Class D" << endl;
}

void helloFromD() {
cout << "Hello from D" << endl;
}
};

int main() {
D d;
d.display();
d.B::HelloFromA();//we have to suggest the path from which class A will be accessed i.e., through class B or class C.
d.helloFromB();
d.helloFromC();
d.helloFromD();
return 0;
}