#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
<<<<<<< HEAD
    int val;
    Node *next;

    Node(int val){
        this->val =val;
        this->next=NULL;
=======
        int val;
        Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;

>>>>>>> 3ffb98ca6af6d90dc6fd4b9caef774cc6d53189d
    }
};


void insert(Node* &head,Node* &tail,int val){
<<<<<<< HEAD
    Node* newnode = new Node(val);
=======
<<<<<<< HEAD

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
=======
    Node* new_node = new Node(val);
>>>>>>> 9faf75f63e49c1b88175c6ecafcb95e22871e7ff

    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    tail->next=newnode;
    tail = newnode;
}


int size(Node* head,Node* tail){
    int count=0;
    Node* tmp =head;
    while (tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
<<<<<<< HEAD
    return count;
=======
    
>>>>>>> 3ffb98ca6af6d90dc6fd4b9caef774cc6d53189d
>>>>>>> 9faf75f63e49c1b88175c6ecafcb95e22871e7ff
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
    }

    int min_val = find_min(head);
    int max_val = find_max(head);        
    
    cout << max_val - min_val << endl;
    
=======
    }    

    delete_any_position(head,tail,5);

    Node *tmp=head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
>>>>>>> 9faf75f63e49c1b88175c6ecafcb95e22871e7ff
    }

<<<<<<< HEAD
  
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert(head2,tail2,val);
    }
   
    if(size(head,tail) == size(head2,tail2)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  
    
=======
>>>>>>> 3ffb98ca6af6d90dc6fd4b9caef774cc6d53189d
>>>>>>> 9faf75f63e49c1b88175c6ecafcb95e22871e7ff
    return 0;
}