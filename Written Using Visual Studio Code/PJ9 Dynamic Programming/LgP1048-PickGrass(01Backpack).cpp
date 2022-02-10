#include <cstdio>
#include <algorithm>

using namespace std;

//二维动态转移方程：dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]); if w[i] > j, dp[i][j]=dp[i-1][j];
//v[i] is value
//w[i] is weight
//j 剩余重量
//i 当前层数

//一维：dp[j]=max(dp[j-w[i]]+val[i], dp[j]);

struct plant {
    int time;
    int val;
} p[105];

int t, m, dp[105][1050];

int main() {
    scanf("%d%d", &t, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &p[i].time, &p[i].val);
    }

    for (int i = 1; i <= m; i++) {
        for (int j = t; j >= 0; j--) {
            if (p[i].time <= j)
                dp[i][j] = max(dp[i - 1][j - p[i].time] + p[i].val, dp[i - 1][j]);
            else 
                dp[i][j] = dp[i - 1][j];
        }
    }

    printf("%d", dp[m][t]);
    return 0;
}