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


int max_depth(Node* root){
    if(root == NULL) 
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l,r) + 1;
}


int count_node(Node* root){
    if(root == NULL)
        return 0;
    
    int r = count_node(root->right);
    int l = count_node(root->left);
    return l + r + 1;
}


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

    int count = count_node(root);
    int depth = max_depth(root);

    if(count == pow(2,depth) - 1)
        cout<< "YES" << endl;
    else
        cout<< "NO" << endl;
    
    return 0;
}