#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *right;
    node *left;
    node(int x){
        data=x;
        right=NULL;
        left=NULL;
    }
};

void insert(node **root, int x){
    if( (*root)->data > x ){
        if((*root)->left==NULL) (*root)->left= new node(x);
        else insert(&(*root)->left,x);
    }else{
        if((*root)->right==NULL) (*root)->right= new node(x);
        else insert(&(*root)->right,x);
    }
}

void preoder(node *root){
    
    if(root->left) preoder(root->left);
    if(root->right) preoder(root->right);
    cout<< root->data<<' ';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x; cin>>x;
        node *root= new node(x);
        for(int i=1;i<n;i++){
            int x; cin>>x;
            insert(&root,x);
        }
        preoder(root);
        cout<<endl;
    }
}