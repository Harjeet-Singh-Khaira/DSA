#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root->data > data){
        root->left = insertBST(root->left, data);
    }
    else{
        root->right = insertBST(root->right, data);
    }

    return root;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(root->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* minVal(Node* root){
    Node* temp = root;
    while(root->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* deleteFromBST(Node* &root, int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //both child
        if(root->left != NULL && root->right != NULL){
            //max from left
            // int max = maxVal(root->left)->data;
            // root->data = max;
            // root->left = deleteFromBST(root->left, max);
            // return root;
            //min from right
            int min = minVal(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    if(root->data > key){
        root->left = deleteFromBST(root->left, key);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, key);
        return root;
    }
}

Node* insertIntoBinaryTree(Node* root){
    cout << "Enter data : ";
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for left of " << root->data << endl;
    root->left = insertIntoBinaryTree(root->left);
    cout << "Enter data for left of " << root->data << endl;
    root->right = insertIntoBinaryTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    if(root == NULL){
        return;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        if(temp != NULL){
            cout << temp->data << " ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

void printInorder(Node* &root){
    if(root == NULL){
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main(){
    //Node* binaryTree = NULL;
    Node* BST = NULL;
    //binaryTree = insertIntoBinaryTree(binaryTree);
    //levelOrderTraversal(binaryTree);

    int data;
    cout << "Enter data for BST: ";
    cin >> data;
    while(data != -1){
        BST = insertBST(BST, data);
        cin >> data;
    }
    printInorder(BST);
    int key;
    cout << "\nEnter data to be deleted : ";
    cin >> key;
    BST = deleteFromBST(BST,key);
    cout << "After Deletion BST : ";
    printInorder(BST);
}

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//50 20 70 10 30 90 110 -1