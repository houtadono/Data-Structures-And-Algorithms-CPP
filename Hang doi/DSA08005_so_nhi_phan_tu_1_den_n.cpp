#include<bits/stdc++.h>
using namespace std;
string np[10001];
void sang(){
    int dem=1;
    queue<string> q;
    q.push("1");
    while(dem<10001){
        string t= q.front();q.pop();
        np[dem++]=t;
        q.push(t+"0");
        q.push(t+"1");
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    sang();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=1;i<=n;i++)
            cout<<np[i]<<' ';
        cout<<endl;
    }
}