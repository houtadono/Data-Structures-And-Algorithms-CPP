#include<bits/stdc++.h>
using namespace std;
int a[9][9],res;
bool hang[9],dc1[22],dc2[22];
void ql(int i,int sum){
    if(i==9){
        res=max(res,sum);
        return;
    }
    for(int j=1;j<=8;j++){
        if(hang[j]==false&&dc1[i+j]==false&&dc2[i-j+8]==false){
            hang[j]=true;
            dc1[i+j]=true;
            dc2[i-j+8]=true;
            if(i<=8) ql(i+1,sum+a[i][j]);
            hang[j]=false;
            dc1[i+j]=false;
            dc2[i-j+8]=false;
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        res=0;
        memset(hang,false,sizeof(hang));
        memset(dc1,false,sizeof(dc1));
        memset(dc2,false,sizeof(dc2));
        for(int i=1;i<=8;i++)
            for(int j=1;j<=8;j++)
                cin>>a[i][j];
        ql(1,0);
        cout<<res<<endl;
    }
}