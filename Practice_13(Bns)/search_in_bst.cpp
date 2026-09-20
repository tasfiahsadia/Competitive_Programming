#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* input_tree(){
    int val;
    cin >> val;

    node* root;
    if(val == -1) root = NULL;
    else root = new node(val);

    queue<node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        node* left;
        node* right;

        if(l == -1) left = NULL;
        else left = new node(l);

        if(r == -1) right = NULL;
        else right = new node(r);

        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

bool search(node* root, int val){
    if(root == NULL) 
        return false;
    if(root->val == val) 
        return true;
    if(val < root->val) 
        return search(root->left, val);
    else 
        return search(root->right, val);
}

int main(){
    node* root = input_tree();
    int val;
    cin >> val;  
    if(search(root, val)) 
        cout << "Found" << endl;
    else 
        cout << "Not Found" << endl;
}