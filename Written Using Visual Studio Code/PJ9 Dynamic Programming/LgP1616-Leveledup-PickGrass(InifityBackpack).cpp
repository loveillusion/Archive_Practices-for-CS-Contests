#include <cstdio>
#include <algorithm>

//状态转移方程：dp[i] = max(dp[i - w[r]] + v[r], dp[i])

using namespace std;

int t, m, time[10000050], val[10000050];

long long dp[10000050];

int main() {
    scanf("%d%d", &t, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &time[i], &val[i]);
    }

    for (int i = 1; i <= m; i++) {
        for (int r = time[i]; r <= t; r++) {
            dp[r] = max(dp[r - time[i]] + val[i], dp[r]);
        }
    }

    printf("%lld", dp[t]);
    return 0;
}