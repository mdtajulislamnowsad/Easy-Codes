#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void sorting(Node* &head) {
    if (head == NULL) return;
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val < j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int a, b;
    int val;

    cin >> a;
    while (a--) {   
        cin >> val;
        insert(head, tail, val);
    }

    cin >> b;
    while (b--) {   
        cin >> val;
        insert(head2, tail2, val);
    }
    
    if (head == NULL) {
        head = head2;
    } else if (head2 != NULL) {
        tail->next = head2;
    }

    
    sorting(head);
    print_list(head);

    return 0;
}