#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k;
void in(int x,int a[])
{
    cout<<"Buoc "<<x-1<<": ";
    For(i,0,x) cout<<a[i]<<' ';
    cout<<endl;
}
void solve()
{
    cin>>n; int a[n];
    For(i,0,n) cin>>a[i];
    For(i,0,n) 
    {
        int key=a[i];
        int j=i;
        while( j>0 && key<a[j-1] )
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
        in(i+1,a);
    }
//  cout<<endl;
}

int main()
{
    int t;t=1;
    while(t--)
    {
        solve();
    }
}