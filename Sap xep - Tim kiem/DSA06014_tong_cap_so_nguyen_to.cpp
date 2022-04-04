#include<bits/stdc++.h>
using namespace std;
int n,k;
int N=1000000;
int check[1000001]={0};
void solve()
{
    cin>>n;
    int kt=1;
    for(int i=2;i<=n/2;i++)
    {
        if(!check[i]&&!check[n-i])
        {
            cout<<i<<' '<<n-i;
            kt=0;
            break;
        }
    }
    if(kt) cout<<-1;
    cout<<endl;
}

void sang()
{
    check[0]=1;
    check[1]=1;
    for(int i=2;i*i<=N;i++)
        if (check[i] == 0) 
            for (int j = i * i; j <= N; j += i)
                check[j] = 1;
}

int main()
{
    sang();
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}