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

void addNode(int u,int v, char x,node **root){
    if( (*root)!=NULL && (*root)->data==u ){
        if(x=='L') (*root)->left= new node(v);
        else (*root)->right= new node(v);
    }else{
        if( (*root)->left != NULL ) addNode(u,v,x,&(*root)->left);
        if( (*root)->right != NULL ) addNode(u,v,x,&(*root)->right);
    }
}

bool check(node *root1, node *root2){
    if(root1&&!root2 || !root1&&root2) return false;
    if(!root1&&!root2) return true;
    if(root1->data==root2->data){
        if(root1->left&&root2->left)
            if(!check(root1->left,root2->left)) return false;
        if(root1->right&&root2->right)
            if(!check(root1->right,root2->right)) return false;
        return true;
    }else return false;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        n--;
        int u,v; char x;
        cin>>u>>v>>x;
        node *root1 = new node(u);
        addNode(u,v,x,&root1);
        while(n--){
            cin>>u>>v>>x;
            addNode(u,v,x,&root1);
        }
        cin>>n;
        n--;
        cin>>u>>v>>x;
        node *root2 = new node(u);
        addNode(u,v,x,&root2);
        while(n--){
            cin>>u>>v>>x;
            addNode(u,v,x,&root2);
        }
        cout<<check(root1,root2)<<endl;
    }
}