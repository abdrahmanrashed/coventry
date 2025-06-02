#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, ans = 0;
    cin >> n;
    vector<int> v(n), p(n), s(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        p[i] = ans;
        ans = gcd(ans, v[i]);
    }
    int tmp = 0;
    for(int i = n - 1; i >= 0; --i){
        s[i] = tmp;
        tmp = gcd(tmp, v[i]);
    }
    for(int i = 0; i < n; ++i){
        ans = max(ans, gcd(p[i], s[i]));
    }
    cout << ans;
} 
