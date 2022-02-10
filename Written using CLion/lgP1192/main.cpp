#include <bits/stdc++.h>

using namespace std;

long long n, k, ans[100005];

int main() {
    cin >> n >> k;
    ans[1]=1;
    ans[0]=1;
    for(int i=2;i<=k;i++) {
        ans[i] = (ans[i - 1] << 1) % 100003;
    }
    for(int i=k+1;i<=n;i++) {
        ans[i] = (ans[i - 1] * 2 - ans[i - 1 - k] + 100003) % 100003;
    }
    cout << ans[n];
    return 0;
}
