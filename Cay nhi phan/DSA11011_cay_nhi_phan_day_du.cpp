#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void addNode(int u,int v,char x,node **root){
    if((*root)->data==u && (*root)!=NULL){
        if(x=='L') (*root)->left = new node(v);
        else (*root)->right = new node(v);
    }else{
        if((*root)->left !=NULL) addNode(u,v,x,&(*root)->left);
        if((*root)->right!=NULL) addNode(u,v,x,&(*root)->right);
    }
    
}

bool check(node *root){
    if(root->left!=NULL&&root->right==NULL) return false;
    if(root->left==NULL&&root->right!=NULL) return false;
    if(root->left!=NULL&&root->right!=NULL){
        if(check(root->left) && check(root->right)) return true;
        else return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        n--;
        int u,v; char x;
        cin>>u>>v>>x;
        node *root=new node(u);
        addNode(u,v,x,&root);
        while (n--){
            cin>>u>>v>>x;
            addNode(u,v,x,&root);
        }
        cout<<check(root)<<endl;
    } 
}