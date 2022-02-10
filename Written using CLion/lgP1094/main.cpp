#include <bits/stdc++.h>

using namespace std;

int w, n, g[30005], ans = 0;

int main() {
    cin >> w;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> g[i];
    }
    sort(g, g+n, greater<int>());
    int l = 0, r = n-1;
    while (true) {
        if (g[l]+g[r]<=w) {
            ans++;
            l++;
            r--;
        } else {
            ans++;
            l++;
        }
        if (l > r) {
            break;
        }
    }
    cout << ans;
    return 0;
}
