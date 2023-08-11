#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]={11,21,324,23,1,23,54,65,34,23};

    int key;
    cout<<"Enter key: ";
    cin>>key;

    bool found=linearSearch(arr,10,key);

    if(found){
        cout<<"key found"<<endl;
    }

    else{
        cout<<"key not found"<<endl;
    }
}   