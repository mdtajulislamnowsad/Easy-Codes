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

void insert(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=new_node;    

}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert(head,1);

    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    
    
    
    return 0;
}