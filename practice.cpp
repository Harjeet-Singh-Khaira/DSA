#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a+b)>=10||(b+c)>=10||(a+c)>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}