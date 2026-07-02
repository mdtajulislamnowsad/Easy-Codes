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
        tail = new_node;
        return;
    }

    tail->next=new_node;
    tail =new_node;
    
}

void reverse(Node* tmp){
    if(tmp == NULL){
        return;
    }
    reverse(tmp->next);
    cout << tmp->val <<" " ;
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

    reverse(head);    

    return 0;
}