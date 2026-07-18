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


void delete_at_tail(Node* &head,Node* &tail){

    Node* delete_node = tail;
    tail = tail->prv;
    delete delete_node;

    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;

}


int main() {
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next= a;
    a->prv = head;

    a->next= tail;
    tail->prv=a;

    delete_at_tail(head,tail);

    print_forward(head);
    return 0;
}