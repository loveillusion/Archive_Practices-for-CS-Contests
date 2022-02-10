#include <bits/stdc++.h>

using namespace std;

queue<int> q;
int n, m, cnt=1;

int main() {
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        if (cnt==m) {
            cout << q.front() << " ";
            q.pop();
            cnt = 1;
        } else {
            cnt++;
            q.push(q.front());
            q.pop();
        }
    }
    return 0;
}
