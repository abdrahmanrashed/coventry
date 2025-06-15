#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        if(i) v[i] += v[i - 1];
    }
    ll sum = -1e18, mn = 0;
    // [i, j] => v[j] - v[i - 1] = cur
    // maximize cur -> -v[i - 1]
    // minimize v[i - 1]
    for(int j = 0; j < n; ++j){
        ll cur = v[j] - mn;
        sum = max(sum, cur);
        mn = min(mn, v[j]);
    }
    cout << sum;
}
