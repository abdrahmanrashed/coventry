#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> v[i];
    }
    map<int, array<int, 2>> mp;
    for(int i = 1; i <= n; ++i){
        for(int j = i + 1; j <= n; ++j){
            auto [k, l] = mp[x - v[i] - v[j]];
            if(k){
                // k < l < i < j
                cout << i << ' ' << j << ' ' << k << ' ' << l;
                return 0;
            }
        }
        for(int j = 1; j < i; ++j){
            mp[v[j] + v[i]] = {j, i};
            // {1, 2}
            // {1, 3}, {2, 3}
            // {1, 4}, {2, 4}, {3, 4}
        }
    }
    cout << "IMPOSSIBLE";
}
