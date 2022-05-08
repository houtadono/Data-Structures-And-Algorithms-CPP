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

void insert(node*root, int x){
    if(root->data > x){
        if(root->left) insert(root->left,x);
        else root->left = new node(x);
    }else{
        if(root->right) insert(root->right,x);
        else root->right = new node(x);
    }
}

void preOrder(node* root){
    cout<<root->data<<' ';
    if(root->left) preOrder(root->left);
    if(root->right) preOrder(root->right);
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
        preOrder(root);
        cout<<endl;
	}
	return 0;
}
