#include<iostream>
#include<stack>
using namespace std;

void add(stack<int>&inputStack,int size,int ele){
    if(inputStack.empty()){
        inputStack.push(ele);
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    add(inputStack,size,ele);
    inputStack.push(num);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    int s = st.size(),ele;
    cout<<"Enter element to be added: ";
    cin>>ele;
    stack<int> temp = st;
    cout<<"Stack before deletion: ";
    for(int i=0;i<s;i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    add(st,s,ele);
    cout<<endl<<"Stack after addition: ";
    temp = st;
    for(int i=0;i<s+1;i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}