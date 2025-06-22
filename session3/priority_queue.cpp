#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s; //filo
    queue<int> q; //fifo
    // push, pop O(1)

    priority_queue<int> pq;
    pq.push(3); // {3}
    pq.push(2); // {3, 2}
    pq.push(5); // {5, 3, 2}
    pq.pop();  // {3, 2}
    pq.top(); // 3
    // push, pop O(logn)
    // top O(1)
}
