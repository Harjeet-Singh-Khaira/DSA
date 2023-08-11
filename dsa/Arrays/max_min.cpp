#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[],int size){
    int min=INT_MAX;
    for(int i = 0; i<size;i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[],int size){
    int max=INT_MIN;
    for(int i = 0; i<size;i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    
    int size;
    cin >> size;

    int arr[100];

    cout<<"Enter numbers"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter "<<i+1<<" number : ";
        cin>>arr[i];
    }    

    cout<<getMin(arr,size)<<endl;
    cout<<getMax(arr,size)<<endl;
}