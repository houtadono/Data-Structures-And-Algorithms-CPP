#include<bits/stdc++.h>
using namespace std;
long n,k,m;
#define For(i,a,b) for(int i=a;i<b;i++)
typedef struct stt{
    int gt,so_lan;
}s;

int cmp(s a,s b)
{
    if(a.so_lan>b.so_lan) return 1;
    if(a.so_lan<b.so_lan) return 0;
    if(a.gt<b.gt) return 1;
    return 0;
}

void solve()
{
    cin>>n;
    s so[n];
    int pt=0;
    For(i,0,n)
    {
        int x;
        cin>>x;
        int kt=1;
        For(j,0,pt)
            if(x==so[j].gt)
            {
                so[j].so_lan++;
                kt=0;
                break;
            }
        if(kt)
        {
            so[pt].gt=x;
            so[pt].so_lan=1;
            pt++;
        }
    }
    sort(so,so+pt,cmp);
    For(i,0,pt)
    {
        while(so[i].so_lan--) cout<<so[i].gt<<' ';
    }
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}