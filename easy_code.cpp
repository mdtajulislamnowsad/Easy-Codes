#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void sort_list(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    int val;
    while (cin >> val && val != -1) {
        insert(head, val);
    }
    sort_list(head);
    print_forward(head);
    return 0;
}