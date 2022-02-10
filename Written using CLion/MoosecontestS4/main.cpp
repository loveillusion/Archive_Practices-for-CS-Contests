#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, e;
    cin >> v >> e;
    int a[e], b[e];
    int num[10001];
    int ans = 0;
    for (int i=0; i<10001; i++)
        num[i]=0;
    for (int i=0; i<e; i++) {
        cin >> a[i] >> b[i];
        num[a[i]]++;
        num[b[i]]++;
    }
    for (int i=0; i<10001; i++) {
        if (num[i]>=3) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
