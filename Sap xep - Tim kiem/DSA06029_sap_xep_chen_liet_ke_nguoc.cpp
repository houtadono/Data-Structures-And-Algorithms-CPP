#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k;
vector< vector<int> > res;
void in()
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++)
        {
            cout<<res[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    cin>>n; vector<int> a;
    For(i,0,n)
    {
        int x;cin>>x;
        a.push_back(x);
    }
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
        res.push_back(a);
    }
    in();
}