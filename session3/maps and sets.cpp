#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> s;
    s.insert(2); // {2}
    s.find(2);
    s.insert(2); // {2}
    s.erase(2);
    s.find(2);
    for(auto & i : s){
        cout << i << ' ';
    }
    s.lower_bound(2);

    map<int, int> mp;
    mp[2] = 3; // mp.insert({2, 3});
    mp.find(2);
    mp.erase(2);
    mp.find(2);
    for(auto & [i, j] : mp){
        cout << i << ',' << j << ' d';
    }
    mp.lower_bound(2);

    multiset<int> sm;
    multimap<int, int> mpm;
}
