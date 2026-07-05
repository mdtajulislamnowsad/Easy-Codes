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

void Max_val(Node* head){
    int Max = 0;     
    Node* tmp = head;     
    while (tmp != NULL)
    {
        if(tmp->val > Max){
            Max = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << Max ;
    
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
    
    Max_val(head);
   
    return 0;
}