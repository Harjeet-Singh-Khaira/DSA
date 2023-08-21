#include<bits/stdc++.h>
using namespace std;

//find minimum element in entire array and place it at it's correct place.
//time complexity: O(n^2)
//space complexity: O(1)
//best case time complexity: O(n^2)
void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){

        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[6]={12,32,34,23,65,12};
    selectionSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}