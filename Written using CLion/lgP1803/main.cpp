#include <bits/stdc++.h>

using namespace std;

struct test {
    int start;
    int end;
}; test t[1000005];

int n, ans = 0;

bool compare(test t1, test t2) {
    return t1.end < t2.end;
}

int main() {
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> t[i].start >> t[i].end;
    }
    sort(t, t+n, compare);
    int last = 0;
    for (int i=0; i<n; i++) {
        if (t[i].start>=last) {
            ans++;
            last = t[i].end;
        }
    }
    cout << ans;
    return 0;
}
