#include<iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"Enter numbers"<<endl;

    for(int i=0; i<5; i++){
        cout<<"Enter "<<i+1<<" number : ";
        cin>>arr[i];
    }    

    float size;
    size=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }    

    cout<<"Sum of numbers of array: "<<sum<<endl;
    cout<<"Average of numbers of array: "<<sum/size<<endl;

    return 0;
}