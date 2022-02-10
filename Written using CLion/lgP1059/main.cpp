#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int g[n];
    for (int i=0; i<n; i++) {
        cin >> g[i];
    }
    sort(g, g+n);
    int cnt=0, a[n];
    for (int i=0; i<n; i++) {
        if (i==n-1) {
            a[cnt]=g[i];
            cnt++;
        } else {
            if (g[i]==g[i+1]) {
                continue;
            } else {
                a[cnt]=g[i];
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    for (int i=0; i<cnt; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
