#include<bits/stdc++.h>
using namespace std;
vector<string> res;
int n,a[11][11];
void ql(int i,int j, string s){
	if(!a[0][0]) return;
	if(i==n-1&&j==i) res.push_back(s);
	if(i+1<n&&a[i+1][j]) ql(i+1,j,s+"D");
	if(j+1<n&&a[i][j+1]) ql(i,j+1,s+"R");
}

int main(){
    int t; cin>>t;
    while(t--){
    	cin>>n;
    	for(int i=0;i<n;i++)
    		for(int j=0;j<n;j++)
    			cin>>a[i][j];
    	ql(0,0,"");
    	if(res.empty()) cout<<-1;
    	else
    		for(int i=0;i<res.size();i++) cout<<res[i]<<' ';
    	cout<<endl;
    	res.clear();
	}
	return 0;
}
