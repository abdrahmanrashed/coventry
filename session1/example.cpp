#include <bits/stdc++.h>
using namespace std;

int a[10000]; // 4 * 10^4 bytes

int main(){
    int n; // 10^5
    cin >> n;

    for(int i = 1; i < n; i *= 2){
        for(int j = 0; j < n; ++j){
            cout << "hi ";
        }
        cout << '\n';
    } // O(nlogn)  

    1e5 * __lg(int(1e5));
    1600000.0 / 2.4e9;
    0.00067; // seconds
    0.67; // milliseconds

    for(int i = 1; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << "hi ";
        }
        cout << '\n';
    } // O(n^2)

    1e10 / 2.4e9;
    4.167; // seconds

    2.4e9 / 10;

    sizeof(int);

    // 32-bit system -> 32bits per pointer
    // 64-bit system -> 64bits per pointer
    
} // O(nlogn + n^2) -> O(n(logn + n)) -> O(n(n)) -> O(n^2)

// cpu 2.4ghz -> 2.4 billion operations per second. -> 2.4 * 10^9 operations