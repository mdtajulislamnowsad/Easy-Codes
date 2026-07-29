#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> new_stack;

    while(!myStack.empty()){
        new_stack.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);

    while(!new_stack.empty()){
        myStack.push(new_stack.top());
        new_stack.pop();
    }
    return myStack;
}

int main() {
    stack<int> myStack;
    myStack.push(3);
    myStack.push(2);
    myStack.push(1);

    int x = 5;
    pushAtBottom(myStack, x);

    cout << "Stack elements from top to bottom: ";
    while(!myStack.empty()){
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}