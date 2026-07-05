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

void remove(Node* head) {
    Node* newnode = head;
    while (newnode != NULL) {
        Node* tmp = newnode;
        while (tmp->next != NULL) {
            if (tmp->next->val == newnode->val) {
                Node* deletenode = tmp->next;
                tmp->next = tmp->next->next;
                delete deletenode;
            } else {
                tmp = tmp->next;
            }
        }
        newnode = newnode->next;
    }
}

int main() {
        
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert(head,tail,val);
    }

    remove(head);

    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
    
   
    return 0;
}