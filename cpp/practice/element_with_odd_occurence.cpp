#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,2,3,1,2,2,4,6,4,6},ans=0;
    for(int i=0;i<11;i++){
        ans^=arr[i];
    }
    cout<<ans;
    return 0;
}