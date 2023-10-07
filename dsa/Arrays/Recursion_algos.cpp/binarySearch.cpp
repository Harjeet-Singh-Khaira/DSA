#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){
    if(start > end){
        return false;
    }
    int mid = (start+end)/2;

    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        return binarySearch(arr,start,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,end,key);
    }
}

int main(){
    int arr[5]={1,3,5,7,18};
    cout<<binarySearch(arr,0,4,1)<<endl;
}