#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
int n,k,a[100],arr[100][100];
void in()
{
    For(i,0,k)
    {
        cout<<"Buoc "<<k-i<<": ";
        For(j,0,n-i-1) cout<< a[j]<<' ';
        For(j,n-i-1,n) cout<< arr[k-i-1][j]<<' ';
        cout<<endl;
    }
}
void solve()
{
    k=0;
    cin>>n;;
    For(i,0,n) cin>>a[i];
    For(i,0,n-1) 
    {
        int check=1;
        For(j,i+1,n)
        {
            if(a[i]>a[j])
            {
                check=0;
                swap(a[i],a[j]);
            }
            arr[k][j]=a[j];
        }
        if(check) break;
        k++;
    }
    in();
//  cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}