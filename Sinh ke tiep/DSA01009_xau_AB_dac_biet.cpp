#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
string s="";
vector<string>res;
void ql(int i)
{
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-k){
            for(int l=1;l<=n-k;l++)
            {
                if(l==1&&a[l]==1){
                    string tmp=s;
                    for(int p=1;p<=n-k;p++)
                        if(a[p]) tmp+='B';
                        else tmp+='A';
                    res.push_back(tmp);
                }
                if(l==n-k&&a[l]==1){
                    string tmp="";
                    for(int p=1;p<=n-k;p++)
                        if(a[p]) tmp+='B';
                        else tmp+='A';
                    tmp+=s;
                    res.push_back(tmp);
                }
                if(a[l]&&a[l-1]&&l>1){
                    string tmp="";
                    for(int p=1;p<=n-k;p++){
                        if(p==l) tmp+=s;
                        if(a[p]) tmp+='B';
                        else tmp+='A';
                    }
                    res.push_back(tmp);
                }
            }
        }else ql(i+1);
    }
}
int main()
{  
    cin>>n>>k;
    for(int i=0;i<k;i++) s+='A';
    ql(1);
    sort(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;
}
        