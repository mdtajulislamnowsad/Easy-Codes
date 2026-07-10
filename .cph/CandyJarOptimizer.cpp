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

void insert(Node* &head,Node* &tail,int jar){

    Node* newnode = new Node(jar);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next=newnode;
    tail=newnode;
}




int main() {

    int t;
    cin >> t;
    while (t--)
    {
        Node* head = NULL;
        Node* tail = NULL;

        

       
    }  

    return 0;
}