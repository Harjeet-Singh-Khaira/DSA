#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumOfKthElement(Node* root, int k){
    if(root == NULL) return;
    int s=0;
    int l=0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            if(k==l){
                s+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }

        else if(!q.empty()){
            q.push(NULL);
            l++;
        }
    }
    cout << s;
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(6);
    root->left->left = new Node(9);
    root->left->right = new Node(1);
    root->left->right->left = new Node(2);
    root->left->right->left->left = new Node(3);
    root->left->right->left->right = new Node(5);
    
    root->right = new Node(3);
    root->right->left = new Node(2);
    root->right->right = new Node(1);
    root->right->left->right = new Node(6);
    root->right->left->right->right = new Node(7);

    sumOfKthElement(root,3);
}