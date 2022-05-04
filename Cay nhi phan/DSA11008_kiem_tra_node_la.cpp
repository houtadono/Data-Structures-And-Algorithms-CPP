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

void addNode(int u,int v,char x,node **root){
    if( (*root) != NULL && (*root)->data ==u){
        if(x=='L') (*root)->left=new node(v);
        else (*root)->right = new node(v);
    }else{
        if((*root)->right!=NULL)
            addNode(u,v,x,&(*root)->right);
        if((*root)->left!=NULL)
            addNode(u,v,x,&(*root)->left);
    }
}

bool check(int level, int &ll, node *root){
    level+=1;
    if(!root->left&&!root->right){
        if(ll == -1)
            ll=level;
        else{
            if(ll!=level) return false;
            else return true;
        }
    }
    if(root->left)
        if(!check(level,ll,root->left)) return false;
    if(root->right)
        if(!check(level,ll,root->right)) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int u,v; char x;
        cin>>u>>v>>x;
        node *root= new node(u);
        addNode(u,v,x,&root);
        n--;
        while(n--){
            cin>>u>>v>>x;
            addNode(u,v,x,&root);
        }
        int ll=-1;
        cout<<check(0,ll,root)<<endl;
    }
}