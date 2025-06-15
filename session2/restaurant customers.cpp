#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<array<int, 2>> v;
    for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }
    sort(v.begin(), v.end());
    int ans = 0, cur = 0;
    for(auto [_, x] : v){
        cur += x;
        ans = max(ans, cur);
    }
    cout << ans;
}
