#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int n,int target){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<-1<<endl;
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    linearSearch(arr,10,5);
}