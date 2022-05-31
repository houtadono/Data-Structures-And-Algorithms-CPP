#include<bits/stdc++.h>
using namespace std;
int res;
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

void insert(node*root, int x){
    if(root->data > x){
        if(root->left) insert(root->left,x);
        else root->left = new node(x);
    }else{
        if(root->right) insert(root->right,x);
        else root->right = new node(x);
    }
}

void solve(node* root,int level){
    if(!root->left&&!root->right) res=max(res,level);
    if(root->left) solve(root->left,level+1);
    if(root->right) solve(root->right,level+1);
}

int main()
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
        node*root=NULL;
		for(int i=0;i<n;i++){
            int x; cin>>x;
            if(i==0) root= new node(x);
            else insert(root,x);
        }
        res=0;
        solve(root,res);
        cout<<res;
        cout<<endl;
	}
	return 0;
}
