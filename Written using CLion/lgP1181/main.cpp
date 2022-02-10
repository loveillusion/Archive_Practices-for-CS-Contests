#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 1, sum = 0;
int a[100005];

int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        if (sum+a[i]>m) {
            sum = 0;
            ans++;
        }
        sum += a[i];
    }
    cout << ans;
    return 0;
}
