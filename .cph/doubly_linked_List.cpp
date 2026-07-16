#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node *next;
    Node *prv;

    Node(int val){
        this->val =val;
        this->next=NULL;
        this->prv=NULL;
    }
};

void print_forward(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    

}

void insert_at_head(Node* &head,int val){
    Node* newnode = new Node(val);

    newnode->next=head;
    head->prv = newnode;
    head = newnode;
}


void insert_at_tail(Node* &tail,int val){
    Node* newnode = new Node(val);

    tail->next=newnode;
    newnode->prv = tail;
    tail = newnode;
}

int main() {
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next= a;
    a->prv = head;

    a->next= tail;
    tail->prv=a;

    insert_at_tail(tail,100);

    print_forward(head);
    return 0;
}