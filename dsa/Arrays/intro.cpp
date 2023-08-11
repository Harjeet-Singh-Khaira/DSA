#include<iostream>
using namespace std;

int main(){
    //Array stores multiple values of same type in a single variable that has contiguous memory location in a single variable
    // char arrchr[5]={'1','a','#','@','z'};

    // int arr[5]={1,2,3,4,5};//5 is optional if we fix the number of inputs
    // cout<<"before change "<<arr[0]<<endl;
    // arr[0]=100;
    // cout<<"after change "<<arr[0]<<endl;
    // cout<<arr<<endl;
    // // for(int i=0;i<5;i++){
    // //     cout<<arr[i]<<endl;
    // // }
    // for(int i:arr){
    //     cout<<i<<endl;
    // }
    
    // cout<<sizeof(arr)<<endl;

    int arr[5];

    cout<<"Enter numbers"<<endl;

    for(int i=0; i<5; i++){
        cout<<"Enter "<<i+1<<" number : ";
        cin>>arr[i];
    }

    int sum=0;

    cout<<"The numbers are ->";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;
        sum=sum+arr[i];
    }
    cout<<"Sum of numbers of array: "<<sum<<endl;
}