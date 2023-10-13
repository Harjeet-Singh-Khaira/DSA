#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int key;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL) return new Node(val);
    if(val > root->data) root->right =  insertBST(root->right,val);
    else root->left = insertBST(root->left,val);
    return root;
}

Node* search(Node* root, int key){
    if(root == NULL) return NULL;
    if(root->data == key) return root;
    if(root->data > key) return search(root->left, key);
    return search(root->right, key);
}

Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }

    return curr;
}

Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }

    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    
    else{

        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->key);
    }

    return root;
}

int main(){
    Node* root = NULL;

    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    insertBST(root,6);

    cout<<search(root,5)->data;
}