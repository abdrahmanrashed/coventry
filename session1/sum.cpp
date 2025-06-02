#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; // 10^5
    cin >> n;
    vector<ll> v(n), p(n); // prefix
    // v: 1 2 3 4 5
    // p: 1 3 6 10 15
    // p[i] = v[i] + p[i - 1]
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        p[i] = v[i];
        if(i > 0) p[i] += p[i - 1];
    }
    // sum = n * max(v) = 10^5 * 10^9 = 10^14
    int q; // 10^5
    cin >> q;
    for(int i = 0; i < q; ++i){ // O(q)
        int l, r;
        cin >> l >> r; // 0 <= l <= r <= n
        // p[r] = sum([1, r])
        // p[l - 1] = sum([1, l - 1])
        // p[r] - p[l - 1] = sum([1, r]) - sum([1, l - 1]) = sum([l, r])

        // int sum = 0;
        // for(int j = l; j <= r; ++j){ // O(n)
        //     sum += v[j];
        // }
        // cout << sum << '\n'; SLOOOW
        ll sum = p[r];
        if(l > 0) sum -= p[l - 1];
        cout << sum << '\n'; // O(1)
    } // O(q)

    // O(n + q)

    // 2 seconds
    // 2.5 * 10^8
    // 5 * 10^8
    // 10^10

} // functions only use 4mb of memory
