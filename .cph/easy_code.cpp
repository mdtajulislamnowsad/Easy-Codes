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

int search(Node* head,int n) {
    int count = 0; 
    int min_val = head->val;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->val == n) {
            return count;
            break;
        }
        temp = temp->next;
        count++;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {   
    
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
    
    int n;
    cin >>n;

    int ans = search(head,n);
    
    cout << ans << endl;

    } 
    return 0;
}