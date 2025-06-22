#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int N = 200001;

bool vis[N];
vector<int> v[N];

void dfs(int x){
    vis[x] = 1;
    for(auto& i : v[x]){
        if(!vis[i]) dfs(i);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int> ans;
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        } 
    }
    cout << ans.size() - 1 << '\n';
    for(int i = 1; i < ans.size(); ++i){
        cout << ans[i - 1] << ' ' << ans[i] << '\n';
    }
}
