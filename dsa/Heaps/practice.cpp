#include<bits/stdc++.h>
using namespace std;

class maxheap{
    public:
    int arr[100];
    int size;
    maxheap(){
        size = 0;
        arr[0] = -1;
    }

    void insert(int val){
        size++;
        arr[size] = val;
        int i = size;
        while((i/2)>0 && arr[i/2]<arr[i]){
            swap(arr[i],arr[i/2]);
            i = i/2;
        }
        return;
    }

    void deletion(){
        if(size == 0){
            cout << "Nothing left to delete\n";
            return;
        }

        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<size){
            int leftIndex = i*2;
            int rightIndex = i*2+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }

    }

    void display(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class minheap{
    public:
    int arr[100];
    int size;
    minheap(){
        size = 0;
        arr[0] = -1;
    }

    void insert(int val){
        size++;
        arr[size] = val;
        int i = size;
        while((i/2)>0 && arr[i/2]>arr[i]){
            swap(arr[i],arr[i/2]);
            i = i/2;
        }
        return;
    }

    void display(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = i*2;
    int right = i*2 + 1;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main(){
    // maxheap h1;
    // minheap h2;
    // int data;
    // cin >> data;
    // while(data != -1){
    //     h1.insert(data);
    //     h2.insert(data);
    //     cin >> data;
    // }
    // h1.display();
    // h2.display();
    // h1.deletion();
    // cout<<"After deletion\n";
    // h1.display();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2; i>0; i--){
        heapify(arr,n,i);
    }
    cout<<"printing array after heapify: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}