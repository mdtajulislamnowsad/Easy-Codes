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


int max_height(Node* root){
    if(root == NULL) 
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l,r) + 1;
}


Node* input(){
    int val;
    cin >> val;
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

        f->right = myright;
        f->left = myleft;
        
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return root;
    
}
int main() {

    Node* root = input();
    cout<< max_height(root);
    
    return 0;
}