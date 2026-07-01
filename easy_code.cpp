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

void print_reverse(Node* head) {
    if (head == NULL) return;
    print_reverse(head->next);
    cout << head->val << " ";
}

int main() {
    Node* head = NULL;
    int val;
    while (cin >> val && val != -1) {
        insert(head, val);
    }
    print_reverse(head);
    return 0;
}