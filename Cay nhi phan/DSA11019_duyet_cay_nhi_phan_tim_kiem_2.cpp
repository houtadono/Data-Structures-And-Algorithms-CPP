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

void postorder(node* root){
    if(root->left) postorder(root->left);
    if(root->right) postorder(root->right);
    cout<< root->data <<' ';
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
        postorder(root);
        cout<<endl;
	}
	return 0;
}
