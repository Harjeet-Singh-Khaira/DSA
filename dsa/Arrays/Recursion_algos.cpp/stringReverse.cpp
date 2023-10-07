#include<iostream>
using namespace std;

void stringReverse(string &s,int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    stringReverse(s,i,j);
}

int main(){
    string s="the boss of world";
    stringReverse(s,0,s.length()-1);
    cout<<s<<endl;
}