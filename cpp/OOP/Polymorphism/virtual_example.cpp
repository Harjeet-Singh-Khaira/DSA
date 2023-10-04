#include<iostream>
using namespace std;

class Animal{
    string type;

    public:
    Animal() : type("Animal") {};

    virtual string getType(){
        return type;
    }
};

class Dog : public Animal{
    string type;
    public:
    Dog() :type("Dog") {};

    string getType() override{
        return type;
    }
};

class Cat : public Animal{
    string type;
    public: 
    Cat() : type("Cat") {};

    string getType() override{
        return type;
    }
};

void print(Animal* animal){
    cout<<"Animal type: "<<animal->getType()<<endl;
}

int main(){
    Animal* dog = new Dog();
    Animal* animal1 = new Animal();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog);
    print(cat1);
}