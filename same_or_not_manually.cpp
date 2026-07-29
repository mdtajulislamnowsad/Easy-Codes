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

void insert_at_tail(Node* &tail,int val){
    Node* newnode = new Node(val);

    tail->next=newnode;
    newnode->prv = tail;
    tail = newnode;
}

void delete_at_head(Node* &head,Node* &tail){

    Node* delete_node = head;
    head = head->next;
    delete delete_node;

    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prv = NULL;

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

void input(Node* &head,Node* &tail,int val){
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



int main() {
    
    Node* head = NULL;
    Node* tail = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        input(head, tail, val);
    }


    for(int i = 0; i < m; i++){
        int val;
        cin >> val;
        input(head2, tail2, val);
    }

    if(n != m){
        cout << "NO" << endl;
        return 0;
    }

    int triger = 1;
    
    while(head != NULL && head2 != NULL){
        if(tail->val != head2->val){
            triger = 0;
            break;
        }
        tail = tail->prv;
        head2 = head2->next;
    }

    cout <<((triger == 1)? "YES" :"NO");

    return 0;
}