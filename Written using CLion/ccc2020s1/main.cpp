#include <bits/stdc++.h>

using namespace std;

int n; double d[100005];

struct T {
    int time;
    int pos;
}; T t[100005];

bool compare (T t1, T t2) {
    return t1.time < t2.time;
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> t[i].time >> t[i].pos;
    }
    sort (t, t+n, compare);
    for (int i=0; i<n-1; i++) {
        d[i] = (double)abs(t[i].pos-t[i+1].pos)/(t[i+1].time-t[i].time);
    }
    sort(d, d+n-1);
    cout << d[n-2];
    return 0;
}
