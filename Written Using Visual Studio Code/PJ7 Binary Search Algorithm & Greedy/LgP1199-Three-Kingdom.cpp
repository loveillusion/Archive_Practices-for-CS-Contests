#include<cstdio>

using namespace std;

int n, wj[505][505], max = 0, max2 = 0, ans = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        for (int p = i + 1; p <= n; p++) {
            scanf("%d", &wj[i][p]);
            wj[p][i] = wj[i][p];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int p = 1; p <= n; p++) {
            if (i==p)
                continue;
            if (wj[i][p]>max) {
                max2 = max;
                max = wj[i][p];
            } else if (wj[i][p]>max2) {
                max2 = wj[i][p];
            }
        }
        if (max2>ans)
            ans = max2;
        max2 = 0;
        max = 0;
    }

    printf("1\n");
    printf("%d", ans);
    return 0;
}