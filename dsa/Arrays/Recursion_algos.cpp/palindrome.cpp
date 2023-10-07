#include<iostream>
using namespace std;

bool ispalindrome(string str, int s, int e){
    if(s>e)
        return true;
    if(str[s] != str[e])
        return false;
    else
        return ispalindrome(str,s+1,e-1);
}

int main(){
    string s="eabcbae";
    cout<<ispalindrome(s,0,s.length()-1)<<endl;
}