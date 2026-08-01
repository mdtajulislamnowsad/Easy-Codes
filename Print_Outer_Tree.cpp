#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val =val;
        this->left=NULL;
        this->right=NULL;
    }
};


Node* input(){
    int val;
    cin >> val;
    if(val == -1) 
        return NULL;
        
    Node* root = new Node(val);
    queue<Node* >q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();


        int l,r;
        cin >> l >> r;
        Node* myleft, *myright;

        if(l == -1 ) myleft = NULL;
        else myleft = new Node(l);

        if(r == -1 ) myright = NULL;
        else myright = new Node(r);

        f->left = myleft;
        f->right = myright;
        
        
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);

        
    }

    return root;
    
}


void printLeft(Node* root) {
    if (root == NULL) 
        return;
    
    if (root->left) 
        printLeft(root->left);

    else if (root->right) 
        printLeft(root->right);

    cout << root->val << " ";
    
}


void printright(Node* root) {

    if (root == NULL) 
        return;
    
    cout << root->val << " "; 
    
    if (root->right) 
        printright(root->right);

    else if (root->left) 
        printright(root->left);

}



int main() {


    Node* root = input();

    if(root != NULL){
        printLeft(root->left);
        cout<< root->val<<" ";
        printright(root->right);
    }   

    return 0;
}