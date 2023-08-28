#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,2,5,6,7,8,9},ans=0;
    for(int i=0;i<10;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<10;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}