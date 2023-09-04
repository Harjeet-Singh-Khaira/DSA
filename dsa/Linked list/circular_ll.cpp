#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    if(head->next == NULL){
        head->next = n;
        n->next = head;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL || head->next == NULL){
        insertAtTail(head, val);
    }

    n->next = head;
    Node* temp =head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    head = n;
}

void deletion(Node* &head, int val){
    Node* temp = head->next;
    Node* del;

    if(head == NULL){
        return;
    }

    if(head->data == val){
        while(temp->next != head){
            temp = temp->next;
        }
        del = head;
        temp->next = head->next;
        head = head->next;
        delete del;
        return;
    }

    if(temp->data == val){
        del = head->next;
        head->next = temp->next;
        delete del;
    }

    while(temp->next->data != val && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return;
    }

    del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

bool isCircular(Node* head){
    Node* temp = head->next;
    
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp==head) return true;
    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool>visited;
    Node* temp = head;

    while(temp != NULL){

        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node* floyDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        slow = slow->next;

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        if(slow == fast) return slow;
    }
}

void display(Node* head){
    Node* temp = head;

    if(head == NULL){
        return;
    }

    cout<<temp->data<<" -> ";

    while(temp->next != head){
        temp = temp->next;
        cout<<temp->data<<" -> ";
    }
    cout<<"head";
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floyDetectLoop(head);

    Node* temp = head;

    while(temp != intersection){
        temp = temp->next;
        intersection = intersection->next;
    }

    return temp;
}

int main(){
    int del;
    Node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,10);
    insertAtHead(head,20);

    display(head);
    // cout<<"\nEnter element to be deleted: ";
    // cin>>del;
    // deletion(head,del);
    // display(head);

    string result = isCircular(head)?"Yes":"No";
    cout<<"\n"<<result<<endl;
    result = detectLoop(head)?"Yes":"No";
    cout<<result<<endl;
    result = floyDetectLoop(head)?"Yes":"No";
    cout<<result<<endl;
}