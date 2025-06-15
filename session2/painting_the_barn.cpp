#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int M = 1001;

int a[M][M];

int main(){
    ifstream fin("paintbarn.in");
    ofstream fout("paintbarn.out");
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    fin >> n >> k;
    for(int i = 0; i < n; ++i){
        int x1, y1, x2, y2;
        fin >> x1 >> y1 >> x2 >> y2;
        a[x1][y1]++;
        a[x1][y2]--;
        a[x2][y1]--;
        a[x2][y2]++;
    } // O(n) -> 10^5
    int ans = 0;
    for(int i = 0; i < M; ++i){
        for(int j = 0; j < M; ++j){
            if(i) a[i][j] += a[i - 1][j];
            if(j) a[i][j] += a[i][j - 1];
            if(i && j) a[i][j] -= a[i - 1][j - 1];
            ans += a[i][j] == k;
        }
    } // O(M^2) -> 10^6
    fout << ans;

    // O(n + M^2) ~= 10^6

    // i/o
    // proccessing 
    // standard input (stdin)
    // standard ouput (stdout)
}
