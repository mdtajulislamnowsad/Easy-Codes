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

int main() {
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next= a;
    a->prv = head;

    a->next= tail;
    tail->prv=a;

    
    return 0;
}