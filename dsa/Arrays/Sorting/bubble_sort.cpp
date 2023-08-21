#include<bits/stdc++.h>
using namespace std;

//time complexity: O(n^2)
//space complexity: O(1)
//best case time complexity: O(n)

void bubbleSort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){

        bool swaped=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped=false){
            break;
        }
    }
}

int main(){
    int arr[6]={21,2,432,21,2,1};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}