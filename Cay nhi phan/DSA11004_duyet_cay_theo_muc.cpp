#include <bits/stdc++.h>
using namespace std;
vector<int> res[10001];
int sizer;
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

void solve(node *root,int level){
    res[level].push_back(root->data);
    if(root->left!=NULL) solve(root->left,level+1);
    if(root->right!=NULL) solve(root->right,level+1);
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        for(int i=0;i<10001;i++) res[i].clear();
        int n; cin>>n;
        sizer=n+1;
        n--;
        int u,v; char x;
        cin>>u>>v>>x;
        node *root=new node(u);
        addNode(u,v,x,&root);
        while (n--){
            cin>>u>>v>>x;
            addNode(u,v,x,&root);
        }
        solve(root,0);
        for(int i=0;i<sizer;i++){
            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j]<<' ';
        }
        cout<<endl;
    } 
}