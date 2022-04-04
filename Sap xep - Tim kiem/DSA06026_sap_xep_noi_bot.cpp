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
        int kt=1;
        For(j,0,n-1)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]); kt=0;
            }
        }
        if(kt) break;
        in(i+1,a);
    }
//  cout<<endl;
}

int main()
{
        solve();
}