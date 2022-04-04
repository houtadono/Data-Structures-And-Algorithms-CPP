#include<bits/stdc++.h>
using namespace std;
void solve(){
    queue<int> q;
    int quest;cin>>quest;
    while(quest--){
        int x;cin>>x;
        switch (x){
            case 1:
                cout<<q.size()<<"\n";
                break;
            case 2:
                if(q.empty()) cout<<"YES\n";
                else cout<<"NO\n";
                break;
            case 3:
                int k;cin>>k;
                q.push(k);
                break;
            case 4:
                if(!q.empty()) q.pop();
                break;
            case 5:
                if(q.empty()) cout<<-1<<"\n";
                else cout<<q.front()<<"\n";
                break;
            default:
                if(q.empty()) cout<<-1<<"\n";
                else cout<<q.back()<<"\n";
                break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
}