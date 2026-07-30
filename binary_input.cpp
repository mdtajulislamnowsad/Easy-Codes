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


void level_orde(Node* root){

    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";


        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
    

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
    level_orde(root);
    
    return 0;
}