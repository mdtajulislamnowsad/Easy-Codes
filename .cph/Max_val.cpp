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


void sorting(Node* &head){
    for (Node* i= head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j=j->next)
        {
            if(i->val < j->val){
                swap(i->val,j->val);
            }
        }
        
    }
    
}


int main() {

    int t;
    cin >> t;
    while (t--)
    {
        Node* head = NULL;
        Node* tail = NULL;

        int jar,kid;
        cin >> jar >> kid;

        int val;
        Node* tmp= head;

        int count = jar;
        while (count--)
        {
            cin >> val;
            insert(head,tail,val);
        }

        sorting(head);
        
        int ans =0;

        count = jar;
        Node* temp=head;
        while (count--)
        {
            if(temp->val % kid == 0){
                ans = temp->val;
                break;
            }
            else{
                temp = temp->next;
            }
        }
        cout << ans << endl;
    }   

    return 0;
}