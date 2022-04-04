#include<bits/stdc++.h>
using namespace std;
int n,k;
int check(int a[],int b[],int start)
{
    while(start<=k)
    {
        if(a[start]!=b[start]) return 0;
        start++;
    }
    return 1;
}

void slove()
{
    cin>>n>>k;
    int a[n+1],res[n+1];
    for(int i=1;i<=k;i++) cin>>res[i];
    for(int i=1;i<=k;i++) a[i]=i;
    int start=1,count=0;
    while(start<=k && a[start]==res[start]) start++;
    start--;
    while(1)
    {
        count++;
        if(check(a,res,start+1)) break;
        int i=k;
        while(i>start&&a[i]==n-k+i) i--;
        if(i==start) break;
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
    cout<<count;
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        slove();
    }
}