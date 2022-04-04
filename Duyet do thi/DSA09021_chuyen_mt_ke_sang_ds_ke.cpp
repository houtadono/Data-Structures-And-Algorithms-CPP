#include<bits/stdc++.h>
using namespace std;
int n,dem,k;
#define For(i,a,b) for(int i=a;i<b;i++)

int main()
{
    cin>>n;
    int a[n+1][n+1];
    For(i,1,n+1)
    {
        For(j,1,n+1)    
        {
            cin>>a[i][j];
            if(a[i][j]) cout<<j<<' ';
        }
        cout<<endl;
    }    
}
        