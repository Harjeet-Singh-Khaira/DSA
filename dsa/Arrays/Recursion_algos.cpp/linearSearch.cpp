#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0]==key){
        return size;
    }
    linearSearch(arr+1,size-1,key);
}

int main(){
    int arr[5] = {9,43,5,2,1};
    cout<<5-linearSearch(arr,5,9);
}