#include <bits/stdc++.h>

using namespace std;

int n, k;

struct attraction {
    int id;
    int score;
}; attraction a[100005];

bool compare (attraction a1, attraction a2) {
    return a1.score < a2.score;
}

int main() {
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> a[i].score;
        a[i].id=i+1;
    }
    sort(a, a+n, compare);
    int ans = 0, cnt = 0, left = 0, right = n;
    while (left<=right) {
        right--;
        ans += a[right].score;
        cnt = 0;
        while (cnt <= k) {
            cnt++;
            left++;
        }
    }
    cout << ans;
    return 0;
}
