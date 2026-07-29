#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node* next;
    Node* prv;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prv = NULL;
    }
};


void insert_at_tail(Node* &head,Node* &tail,string val){
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

    while(true)
    {
        string s;
        cin >> s;

        if(s == "end"){
            break;
        }

        else{
            insert_at_tail(head, tail, s);
        }
    }



    int t;
    cin >> t;

    Node* tmp = head;
    Node* tmp2 = head;

    while (t--)
    {
        string s2,s3;
        cin >> s2;

        if(s2 == "visit"){
            cin >> s3;

            while (tmp2 != NULL)
            {
                if(tmp2->val == s3){

                    tmp = tmp2;
                    cout << tmp2->val << endl;
                    break;
                }
                tmp2 = tmp2->next;
            }
            if(tmp2 == NULL)
                cout << "Not Available" <<endl;

            tmp2 = head;
        }



        else if(s2 == "prev"){
            if (tmp->prv != NULL){
            
                cout << tmp->prv->val <<endl;
                tmp = tmp->prv;
            }

            else
                cout << "Not Available" <<endl;
        }



        else if(s2 == "next"){
            if (tmp->next != NULL){

                cout << tmp->next->val <<endl;
                tmp = tmp->next;
                
            }
            else 
                cout << "Not Available" <<endl;
        }

    }
    
    
    return 0;
}