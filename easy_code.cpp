#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int val;
        Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;

    }
};

void insert(Node* &head,Node* &tail,int val){
    Node* new_node = new Node(val);

    if(head == NULL){
        head = new_node;
        return;
    }

    tail->next=new_node;
    tail =new_node;
    
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next=tail;

    insert(head,tail,100);  
    insert(head,tail,200);  

    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }     

    return 0;
}