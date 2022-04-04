#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void ql(int i,string tmp){
    for(int j=i+1;j<n;j++){
        if(s[j]>tmp[tmp.size()-1]){
            cout<<tmp+s[j]<<' ';
            ql(i+1,tmp+s[j]);
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
            for(int j=i+1;j<s.size();j++)
                if(s[j]<s[i]) swap(s[j],s[i]);
        ql(-1,"");
        cout<<endl;
    }
}