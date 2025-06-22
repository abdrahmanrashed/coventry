#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<array<int, 2>> v(n);
    for(int i = 1; i <= n; ++i){
        int y;
        cin >> y;
        v[i - 1] = {y, i};
    }
    sort(v.begin(), v.end());
    for(int k = 0; k < n; ++k){
        for(int i = k + 1, j = n - 1; i < j;){
            int y = v[i][0] + v[j][0] + v[k][0];
            if(y < x) ++i;
            else if(y > x) --j;
            else if(y == x){
                cout << v[i][1] << ' ' << v[j][1] << ' ' << v[k][1];
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
