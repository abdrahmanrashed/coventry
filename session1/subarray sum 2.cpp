#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    //   0 2 -1 3 5 -2
    // v: 2 1 4 9 7
    map<ll, int> mp;
    ll cur = 0;
    for(auto& i : v){
        cin >> i;
        cur += i;
        i = cur;
    } 
    ll ans = 0;
    mp[0]++;
    for(int i = 0; i < n; ++i){
        ans += mp[v[i] - x];
        // 0: mp = {{0, 1}}
        // 1: mp = {{0, 1}, {2, 1}}
        // 2: mp = {{0, 1}, {2, 1}, {1, 1}}
        // 3: mp = {{0, 1}, {2, 1}, {1, 1}, {4, 1}}
        // 4: mp = {{0, 1}, {2, 1}, {1, 1}, {4, 1}, {9, 1}}
        mp[v[i]]++;
    }
    // v[r] - v[l - 1] = x
    // v[r] - x = v[l - 1]
    cout << ans;
} 
