#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    int x = 0;
    int a,b;
    int ans = 0;
    priority_queue<int,vector<int>,greater<int> >q;
    for (int i=0; i<n; i++) {
        cin >> x;
        q.push(x);
    }
    while (q.size()>1) {
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        ans = ans + a + b;
        q.push(a+b);
    }
    cout << ans << endl;
    return 0;
}
