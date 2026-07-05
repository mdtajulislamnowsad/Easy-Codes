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

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;

    int val;
    while (cin >> val && val != -1) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        count++;
    }

    int t;
    cin >> t;
    while (t--) {
        int idx, val;
        cin >> idx >> val;

        if (idx > count) {
            cout << "Invalid" << endl;
        } 
        else if (idx == 0) {
            Node* newnode = new Node(val);
            newnode->next = head;
            head = newnode;
            count++;
            
            Node* tmp = head;
            while (tmp != NULL) {
                cout << tmp->val << " ";
                tmp = tmp->next;
            }
            cout << endl;
        } 
        else {
            Node* tmp = head;
            for (int i = 1; i < idx; i++) {
                tmp = tmp->next;
            }
            Node* newnode = new Node(val);
            newnode->next = tmp->next;
            tmp->next = newnode;
            
            if (newnode->next == NULL) tail = newnode;
            
            count++;
            
            Node* print = head;
            while (print != NULL) {
                cout << print->val << " ";
                print = print->next;
            }
            cout << endl;
        }
    }

    return 0;
}