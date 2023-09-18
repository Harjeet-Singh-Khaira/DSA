#include<iostream>
using namespace std;

//multi-level inheritance - when one class inherits another class which further inherited by another class.

class Animal{
    public:
    void eat(){
        cout << "Animal is eating" << endl;
    }

    void sleep(){
        cout << "Animal is sleeping" << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Dog is barking" << endl;
    }
};

class BabyDog : public Dog{
    public:
    void woof(){
        cout << "Dog is woofing" << endl;
    }
};

int main(){
    BabyDog b1;

    b1.eat();
}