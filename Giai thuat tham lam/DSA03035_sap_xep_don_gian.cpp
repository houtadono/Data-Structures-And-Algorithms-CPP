#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n;cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    int res = 1, temp = 1, c = v[0].second;
    for (int i = 1; i < n; i++){
        if (v[i].second > c){
            temp++;
            res = max(res, temp);
        }else temp = 1;
        c = v[i].second;
    }
    cout << n - res;
}