#include <cstdio>
#include <algorithm>

using namespace std;

//状态转移方程：dp[j] = max(dp[j-med[i]] + win[i], dp[j] + lose[i]);

int n, r, lose[1000050], win[1000050], med[1000050], dp[1000050];

int main() {
    scanf("%d%d", &n, &r);
    for (int i = 1; i <= n; i++){
        scanf("%d%d%d", &lose[i], &win[i], &med[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = r; j >= 0; j--) {
            if(j >= med[i])
                dp[j] = max(dp[j - med[i]] + win[i], dp[j] + lose[i]);
            else
                dp[j] += lose[i];
        }
    }
    printf("%lld", (long long)dp[r]*5);
    return 0;
}