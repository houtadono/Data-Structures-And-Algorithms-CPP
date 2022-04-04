#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=a;i<b;i++)
string s=" ";
int vt[9]={0},n,a[9];
vector<int> tmp;
void in()
{
    if(n<=4){
        if(tmp[0]==2||tmp[0]==3) return;
    }else{
        int y=abs(tmp[0]-tmp[1]);
        if(y!=1&&y!=n-1) return;
    }
    For(i,1,n+1) cout<<s[a[i]];
    cout<<endl;
}

void ql(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!vt[j])
        {
            a[i]=j;
            vt[j]=1;
            if(j==1||j==5) tmp.push_back(i);
            if(i==n) in();
            else ql(i+1);
            if(j==1||j==5) tmp.pop_back();
            vt[j]=0;
        }
    }
}

int main()
{
    char c;cin>>c;
    for(n=0;n+'A'<=c;n++)
    {
        s+=('A'+n);
    }
    ql(1);
}