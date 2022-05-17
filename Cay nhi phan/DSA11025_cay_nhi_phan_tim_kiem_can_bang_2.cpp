#include<bits/stdc++.h>
using namespace std;
vector<int>res;

void addvec(int *a,int left,int right){
    if(left<=right){
        int mid =left+ (right-left)/2;
        res.push_back(a[mid]);
        addvec(a,left,mid-1);
        addvec(a,mid+1,right);
    }
}

int main()
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
        int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
        res.clear();
        addvec(a,0,n-1);
		for(int i=0;i<n;i++) cout<<res[i]<<' ';
        cout<<endl;
	}
	return 0;
}
