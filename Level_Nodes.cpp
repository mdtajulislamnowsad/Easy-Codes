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

void full_level(Node* root, int x){

    if(root == NULL){
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    
    int position = 0; 
    int triger = 0;

    while(!q.empty()){
        int size = q.size();
        
        if(position == x){

            for(int i = 0; i < size; i++){
                Node* f = q.front();

                q.pop();
                cout << f->val << " ";
            }

            triger = 1;
            break;
        }
        
        for(int i = 0; i < size; i++){
            Node* f = q.front();

            q.pop();

            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        
        position++;
    }

    if(triger == 0){
        cout << "Invalid" << endl;
    }
    
}

int main() {


    Node* root = input();
    int x;
    cin >> x;

    full_level(root, x);

    return 0;
}