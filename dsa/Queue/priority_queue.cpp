#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>>pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}