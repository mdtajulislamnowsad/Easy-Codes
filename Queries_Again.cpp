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

int size(Node* head){
    
    int count = 0;
    Node* tmp = head;

    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void insert_at_head(Node* &head, Node* &tail, int val){
    
    Node* newNode = new Node(val);

    if(head == NULL){

        head = tail = newNode;
        return;
    }

    newNode->next = head;
    head->prv = newNode;
    head = newNode;
}


void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prv=tail;
    tail = newnode;
}

void insert_any(Node* &head,int idx, int val){

    Node* tmp = head;
    for(int i=0;i<idx-1;i++){
        
        tmp = tmp->next;
    }

    Node* newNode = new Node(val);

    newNode->next = tmp->next;
    newNode->prv = tmp;
    tmp->next->prv = newNode;
    tmp->next = newNode;

}


void print_forward(Node* head){
    Node* tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }   

}

void print_backward(Node* tail){
    Node* tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prv;
    }
}



int main() {
    
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;

    while (t--)
    {
    
    int idx,val;
    cin>>idx>>val;

    int sz = size(head);

    if(idx>sz){

        cout<<"Invalid"<<endl;
    }
    else
{
    if(idx == 0){

        insert_at_head(head, tail, val);
    }
    else if(idx == sz){

        insert_at_tail(head, tail, val);
    }
    else{

        insert_any(head, idx, val);
    }

    print_forward(head);
    cout << endl;
    print_backward(tail);
    cout << endl;
}
        
    }  

    return 0;
}
