#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    cout<<n<<endl;
    //base case
    if(n==1) return 1;
    
    // int smallProb = factorial(n-1);
    // int bigProblem = n*smallProb;

    // return bigProblem;

    return n*factorial(n-1);
}

int power(int n){
    //base
    if(n==0) return 1;

    return 2*power(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    cout<<power(n);
}