#include<bits/stdc++.h>
using namespace std;
int x[17],n,k;
void in()
{     
    for(int i=1;i<=n;i++) cout<<x[i];
    cout<<endl;
}
    
void res(int i)
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;
        if(i==n){
            int dem=0;
            for(int i=1;i<=n;i++)
            {
                if(x[i]==1) dem++;
                if(dem>k) break;
            }
            if(dem==k) in();
        }
        else res(i+1);
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n>>k;
        res(1);
    }
}