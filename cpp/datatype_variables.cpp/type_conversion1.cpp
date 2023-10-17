#include<iostream>
using namespace std;
    
    /*
    one class type to other class type 
    when we assign an object of a class into the object of another class then it is called class to class conversion.
    This can be performed either by defining casting operator function in source class or using constructor in the destination class
    */

class Rectangle{
    int width;
    int length;
    int area;

    public:
    Rectangle(int w, int l){
        width = w;
        length = l;
        area = width * length;
    }

    void print(){
        cout << "Width : " << width << " Length : " << length << " Area of rectangle : " << area << endl;
    }
};

class Triangle{
    int base, height;
    float area;
    public:
    Triangle(int b, int h){
        base = b;
        height = h;
        area = 0.5*base*height;
    }

    void print(){
        cout << "Base : " << base << " Height : " << height << " Area : " << area << endl;
    }

    operator Rectangle(){
        Rectangle temp(base, height);
        return temp;
    }
};

int main(){
    Triangle t(10, 20);

    Rectangle r = t;

    t.print();
    r.print();
}