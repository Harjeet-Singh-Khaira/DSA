#include<iostream>
#include<set>
using namespace std;

//set - they store UNIQUE elements of SAME TYPE in a SORTED manner.
//Imutable - we can add or remove elements from a set but we can't change the value of existing elements.

int main(){
    set<int> mySet = {5,3,8,1,3};

    for(auto val : mySet){
        cout << val << " ";
    }
}