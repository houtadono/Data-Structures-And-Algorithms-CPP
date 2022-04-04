#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k;
void in(int x,int a[])
{
    cout<<"Buoc "<<x<<": ";
    For(i,0,n) cout<<a[i]<<' ';
    cout<<endl;
}
void solve()
{
    cin>>n; int a[n];
    For(i,0,n) cin>>a[i];
    For(i,0,n-1) 
    {
        int k=i;
        For(j,i+1,n)
        {
            if(a[k]>a[j])
                k=j;
        }
        swap(a[i],a[k]);
        in(i+1,a);
    }
 //   cout<<endl;
}

int main()
{
    int t;t=1;
    while(t--)
    {
        solve();
    }
}