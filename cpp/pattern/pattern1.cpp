#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<endl;
    cin>>b;
    for(int i=1;i<a;i++){
        for(int j=b;j>0;j--){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}