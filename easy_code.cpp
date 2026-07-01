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

void insert(Node* &head,int idx,int val){
    Node* new_node = new Node(val);

    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp=tmp->next;
    }
    new_node->next=tmp->next;
    tmp->next = new_node;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert(head,1,100);
    insert(head,2,200);
    insert(head,3,300);    

    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }     
        
    return 0;
}