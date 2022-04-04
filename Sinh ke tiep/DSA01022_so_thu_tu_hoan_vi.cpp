#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[],int n)
{
    int i=1;
    while(i<=n)
    {
        if(a[i]!=b[i]) return 1;
        i++;
    }
    return 0;
}

void slove()
{
    int n;cin>>n;
    int a[n+1],res[n+1];
    for(int i=1;i<=n;i++) cin>>res[i];
    for(int i=1;i<=n;i++) a[i]=i;
    int count=1;
    while(1)
    {
        if(check(a,res,n)) count++;
        else break;
        int i=n-1;
        while(i>0&&a[i]>a[i+1])i--;
        if(i==0) break;
        int k=n;
        while(a[k]<a[i]) k--;
        swap(a[i],a[k]);
        int l=i+1,r=n;
        while(l<r)
        {
            swap(a[l],a[r]);
            l++,r--;
        }
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