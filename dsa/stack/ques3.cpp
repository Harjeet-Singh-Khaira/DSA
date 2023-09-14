#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>&inputStack,int count,int size){
    if(inputStack.empty()||count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    deleteMiddle(inputStack,count+1,size);
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

    int s = st.size();
    stack<int> temp = st;
    cout<<"Stack before deletion: ";
    for(int i=0;i<s;i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    deleteMiddle(st,0,s);
    cout<<endl<<"Stack after deletion: ";
    temp = st;
    for(int i=0;i<s-1;i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}