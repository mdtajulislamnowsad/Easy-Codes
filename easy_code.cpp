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

int find_min(Node* head) {
    int min_val = head->val;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->val < min_val) {
            min_val = temp->val;
        }
        temp = temp->next;
    }
    return min_val;
}

int find_max(Node* head) {
    int max_val = head->val;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->val > max_val) {
            max_val = temp->val;
        }
        temp = temp->next;
    }
    return max_val;
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

    int min_val = find_min(head);
    int max_val = find_max(head);        
    
    cout << max_val - min_val << endl;
    
    return 0;
}