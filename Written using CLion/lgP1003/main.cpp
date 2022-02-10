#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cp[n][4];
    for (int i=0; i<n; i++) {
        cin >> cp[i][0] >> cp[i][1] >> cp[i][2] >> cp[i][3];
        cp[i][2] += cp[i][0];
        cp[i][3] += cp[i][1];
    }
    int x, y;
    cin >> x >> y;
    int ans=-1;
    for (int i=0; i<n; i++) {
        if (cp[i][0]<=x && cp[i][2]>=x && cp[i][1]<=y && cp[i][3]>=y)
            ans = i+1;
    }
    cout << ans;
    return 0;
}
