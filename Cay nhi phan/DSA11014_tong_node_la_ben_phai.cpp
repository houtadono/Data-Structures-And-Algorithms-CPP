#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node (int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

struct poin{
    int u,v;
    char x;
};

void addNode(int n, poin *p,node **root){
    map<int,node*> m;
    for(int i=0;i<n;i++){
        if(m.find(p[i].u)==m.end()){
            (*root) =new node(p[i].u);
            if(p[i].x=='L'){
                (*root)->left = new node(p[i].v);
                m[p[i].v] = (*root)->left;
            }else{
                (*root)->right = new node(p[i].v);
                m[p[i].v] = (*root)->right;
            }
            m[p[i].u]= (*root);
        }else{
            if(p[i].x=='L'){
                m[p[i].u]->left = new node(p[i].v);
                m[p[i].v] = m[p[i].u]->left;
            }else{
                m[p[i].u]->right = new node(p[i].v);
                m[p[i].v] = m[p[i].u]->right;
            }
        }
    }    
}

bool isLeaf(node *root){
    if(!root) return false;
    if(root->right==NULL&&root->left==NULL) return true;
    return false;
}

long long sum_node_leaf_right(node *root){
    long long sum=0;
    if(root){
        if(isLeaf(root->right)) sum =root->right->data;
        if(root->right) sum+= sum_node_leaf_right(root->right);
        if(root->left && !isLeaf(root->left)) 
        sum+= sum_node_leaf_right(root->left);
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        poin *p=new poin[n];
        node *root= NULL;
        for(int i=0;i<n;i++) cin>>p[i].u>>p[i].v>>p[i].x;
        addNode(n,p,&root);
        cout<<sum_node_leaf_right(root)<<endl;
    }
}