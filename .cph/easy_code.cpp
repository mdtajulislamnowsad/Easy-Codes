#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node *next;

    Node(int val){
        this->val =val;
        this->next=NULL;
    }
};

void insert(Node* &head,Node* &tail,int val){

    Node* newnode=new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next=newnode;
        tail = newnode;
    }
    
}

void insert_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_at_any_pos(Node* &head,Node* &tail, int idx) {
    if(head == NULL){
        return;
    }

    if (idx == 0) { 
        Node* delnode = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete delnode;
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (tmp == NULL || tmp->next == NULL) return; 
        tmp = tmp->next;
    }

    if (tmp->next != NULL) {
        Node* delnode = tmp->next;
        tmp->next = tmp->next->next;
        if (tmp->next == NULL) tail = tmp; 
        delete delnode;
    }
}


int main() {

    int t;
    cin >> t;
    
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < t; i++)
    {
    int x,y;
    cin >> x >> y;

    
    if (x == 0) {
            insert_head(head, tail, y);
        } 
        else if (x == 1) {
            insert_tail(head, tail, y);
        } 
        else if (x == 2) {
            delete_at_any_pos(head, tail, y);
        }

        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;   
    
    }

    
    return 0;
}