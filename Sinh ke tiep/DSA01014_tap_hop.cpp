#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],d[100],s,res;
void taphop(int i,int tmp)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k){
            if(tmp+j==s) res++;
        }else{
            if(tmp+j<s) taphop(i+1,tmp+j);
        }
    }
}

int main()
{  
    while(1){
        cin>>n>>k>>s;
        if(n==k&&k==s&&s==0) break;
        a[0]=0;
        res=0;
        taphop(1,0);
        cout<<res<<endl;
    }
}
        