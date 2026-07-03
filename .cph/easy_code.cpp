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

int check_equal(Node* head,Node* head2){
    Node* tmp = head;
    Node* tmp2 = head2;

    while (tmp != NULL && tmp2 != NULL)
    {
        if(tmp->val != tmp2->val){
            return 0;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;        
    }

    if(tmp == NULL && tmp2 == NULL){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main() {
        
    Node* head = NULL;
    Node* tail = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert(head,tail,val);
    }

    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert(head2,tail2,val);
    }

    int ans = check_equal(head, head2);
    
    if(ans == 0){
        cout << "NO";
    }
    else{
        cout <<"YES";
    }
    return 0;
}