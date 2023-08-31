#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertionAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next=head;
    if(head != NULL){
        head->prev=n;
    }

    head = n;
}

void insertionAtTail(Node* &head,int val){
    Node* n = new Node(val);

    if(head == NULL){
        insertionAtHead(head,val);
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp -> next;
    }
    
    temp->next = n;
    n->prev = temp;
}

//Not working code.
// void insertionAtTail(Node* &tail,int val){
//     Node* n = new Node(val);

//     n->prev = tail;
//     if(tail != NULL){
//         tail->next = n;
//     }
//     tail = n;
// }

//Not working code.
void deletion(Node* &head, int key){
    Node* temp = head;
    Node* n;
    Node* p;

    if(head == NULL){
        return;
    }

    if(head->data == key){
        head = head->next;
        delete temp;
        head->prev = NULL;
        return;
    }

    while(temp->data != key){
        temp = temp->next;
    }

    p = temp->prev;
    if(temp->next == NULL){
        p->next = NULL;
        delete temp;
        return;
    }
    p->next = temp->next;
    n = temp->next;
    n->prev = p;
    delete temp;
}

void display(Node* head){
    Node* temp = head;

    cout<<"NULL->";
    cout<<temp->data<<"->";
    while(temp->next != NULL){
        cout<<temp->next->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    cout<<"Backwards:\n";

    cout<<"NULL->";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    int del;

    insertionAtTail(head,1);
    insertionAtTail(head,100);
    insertionAtTail(head,30);
    insertionAtTail(head,5);
    insertionAtHead(head,77);
    insertionAtHead(head,13);

    display(head);
    cout<<"Enter element to be deleted: ";
    cin>>del;
    deletion(head,del);
    display(head);
}