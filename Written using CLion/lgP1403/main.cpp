#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;

int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        ans += n/i;
    }
    cout << ans;
    return 0;
}
