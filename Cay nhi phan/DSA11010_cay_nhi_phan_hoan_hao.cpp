#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}
};

struct point{
	int u,v; 
	char x;
};

void addNode(int n,point *p,node **root){
	map<int,node*> m;
	for(int i=0;i<n;i++){
		point tmp = p[i];
		if(m.find(tmp.u)==m.end()){
			(*root) = new node(tmp.u);
			m[tmp.u] = (*root);
			if(tmp.x=='L'){
				(*root)->left = new node(tmp.v);
				m[tmp.v] = (*root)->left;
			}else{
				(*root)->right = new node(tmp.v);
				m[tmp.v] = (*root)->right;
			}
		}else{
			if(tmp.x=='L'){
				m[tmp.u]->left = new node(tmp.v);
				m[tmp.v] = m[tmp.u]->left;
			}else{
				m[tmp.u]->right = new node(tmp.v);
				m[tmp.v] = m[tmp.u]->right;
			}
		}
	}
}

bool perfect_tree(node* root, int level, int &ltmp){
	if(root->left&&!root->right ||!root->left&&root->right) return false;
	level+=1;
	if(!root->left && !root->right){
		if(ltmp == 0) ltmp = level;
		else {
			if(level != ltmp) return false;
			return true;
		}
	}
	else return perfect_tree(root->left,level,ltmp) 
			&& perfect_tree(root->right,level,ltmp);
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		point* p=new point[n];
		for(int i=0;i<n;i++) cin>>p[i].u>>p[i].v>>p[i].x;
		node* root = NULL;
		addNode(n,p,&root);
		int ltmp=0;
		if(perfect_tree(root,0,ltmp)) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
