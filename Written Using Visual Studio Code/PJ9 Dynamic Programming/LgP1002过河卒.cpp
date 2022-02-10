#include<cstdio>
#include<algorithm>

using namespace std;

//状态转移方程：dp[i][j]=dp[i-1][j]+dp[i][j-1];

int fx, fy, hx, hy;
long long dp[25][25];

int checkhorse(int x, int y) {
    if (x==hx && y==hy)
        return 1;
    if (x==(hx-2) && y==(hy-1))
        return 1;
    if (x==(hx-1) && y==(hy-2))
        return 1;
    if (x==(hx+1) && y==(hy-2))
        return 1;
    if (x==(hx+2) && y==(hy-1))
        return 1;
    if (x==(hx+2) && y==(hy+1))
        return 1;
    if (x==(hx+1) && y==(hy+2))
        return 1;
    if (x==(hx-1) && y==(hy+2))
        return 1;
    if (x==(hx-2) && y==(hy+1))
        return 1;
    return 0;
}

int main() {
    scanf("%d%d%d%d", &fx, &fy, &hx, &hy);
    for (int i = 0; i <= fx; i++) {
        for (int j = 0; j <= fy; j++) {
            if (checkhorse(i, j))
                dp[i][j] = 0;
            else if (i==0 && j==0)
                dp[0][0] = 1;
            else if (j-1<0)
                dp[i][j] = dp[i - 1][j];
            else if (i-1<0)
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    printf("%lld", dp[fx][fy]);
}