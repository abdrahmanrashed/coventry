#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    multiset<int> len{n}, pos{0, n};
    for(int i = 0; i < k; ++i){
        int x;
        cin >> x;
        auto it = pos.insert(x);
        len.erase(len.find(*next(it) - *prev(it)));
        len.insert(*next(it) - x);
        len.insert(x - *prev(it));
        cout << *len.rbegin() << ' ';
    }
}
