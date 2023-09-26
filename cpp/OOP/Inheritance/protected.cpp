#include<iostream>
using namespace std;

/*
    *Protected - 
    like private members, protected members are inaccessible outside the class, however, they can be accessed by derieved class, friend classes/functions.

    we need protected members if we want to hide the data of a class, but still want data to be inherited by its derieved class.

    private - members cannot be accessed (or viewed) from outside the class. protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes
*/

class Animal{
    protected:
    string type;

    private:
    string color;

    public:
    void eat(){
        cout<<"I can eat"<<endl;
    }

    void sleep(){
        cout<<"I can sleep"<<endl;
    }

    void setColor(string clr){//setter
        color = clr;
    }

    string getColor(){//getter
        return color;
    }
};

class Dog : public Animal{
    public:
    void setType(string tp){
        type = tp;
    }

    void displayInfo(){
        cout<<"I am a "<<type<<endl;
    }

    void bark(){
        cout<<"I can woof woof"<<endl;
    }
};

int main(){
    Dog d1;

    d1.bark();
    d1.eat();
    d1.sleep();
    d1.setType("Golden Retriever");
    d1.displayInfo();
    d1.setColor("Golden");
    cout<<"My color is "<<d1.getColor()<<endl;
}