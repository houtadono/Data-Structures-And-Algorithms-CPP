#include<bits/stdc++.h>
using namespace std;

void slove(){
    int n; cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]*=a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(binary_search(a.begin()+j+1,a.end(),a[i]+a[j])==true){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; cin>>t;
    while(t--) slove();
}