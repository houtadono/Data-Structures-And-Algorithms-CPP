#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
vector<string> s;
void in(int a[],int n){
	for(int i=1;i<=n;i++) cout<<s[a[i]-1]<<' ';
    cout<<endl ;
} 
void res(int m)
{
    for(int i=a[m-1]+1;i<=n-k+m;i++)
    {
        a[m]=i;
        if(m==k) in(a,k);
        else res(m+1);
    }
}

int main() {
		cin>>n>>k;
        while(n--) 
        {
            string tm; cin>>tm;
            s.push_back(tm);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        n=s.size();
        a[0]=0;
		res(1);
        cout<<endl;
}