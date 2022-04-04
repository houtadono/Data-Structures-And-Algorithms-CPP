#include<bits/stdc++.h>
using namespace std;
int a[31],res=99999;
bool vs[31];
void ql(int i,int pos,int sum){
    for(int j=pos-1;j>=1;j--){
        if(vs[j]==false){
            vs[j]=true;
            sum-=a[j];
            if(sum==0){
                res=min(res,i);
            }else
             if(sum>0&&i<res) ql(i+1,j,sum);
            sum+=a[j];
            vs[j]=false;
        }
    }
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    ql(1,n+1,sum);
    if(res==99999) cout<<-1;
    else cout<<res;
}