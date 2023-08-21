#include<bits/stdc++.h>
using namespace std;

//Reference variable is a reference to an existing variable

void test(int &n){
    n++;
    cout<<"Value of n from test method is: "<<n<<endl;
}

int& test2(int n){
    int num = n;
    int &ans = num;
    return ans;
}

int main(){

    int n;
    cin>>n;

    test(n);
    cout<<test2(n)<<endl;

    cout<<"Value of n from main method is :"<<n<<endl;
    
    // string name = "hello world!!";
    // string ref = name;

    // cout<<name<<endl;
    // cout<<ref<<endl;

    // int a=5;
    // int &b=a;

    // cout<<a<<endl;
    // a++;
    // cout<<a<<endl;
    // b++;
    // cout<<a<<endl;

}