#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],d[100];

int main()
{  
    int t; cin>>t;
    while(t--){
        int test,a[81],n;
        string s;
        cin>>test>>s;
        cout<<test<<' ';
        for(int i=0;i<s.size();i++)
            a[i+1]=s[i]-'0';
        n=s.size();
        int i=n-1;
        while(i>0&&a[i]>=a[i+1]) i--;
        if(i==0) cout<<"BIGGEST\n";
        else{
            int k=n;
            while(a[i]>=a[k]) k--;
            swap(a[k],a[i]);
            int l=i+1,r=n;
            while(l<r){
                swap(a[l],a[r]);
                l++,r--;
            }
            for(int j=1;j<=n;j++)
            {
                cout<<a[j];
            }
            cout<<endl;
        }
    }
}
        