#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    ll l = 1, r = 1e18, ans;
    while(l <= r){
        ll m = (l + r)/ 2;
        ll sum = 0;
        for(int& i : v){
            sum += m / i;
            if(sum >= t) break;
        }
        if(sum >= t){
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    cout << ans;
}
