#include <cstdio>
#include <algorithm>

using namespace std;

int r, t[1050][1050], f[1050][1050], MAX = -1;

int main() {
    scanf("%d", &r);
    for (int i = 1; i <= r; i++) {
        for (int k = 1; k <= i; k++) {
            scanf("%d", &t[i][k]);
            if (i == 1 && k == 1)
                f[1][1] = t[1][1];
            if (k==1)
                f[i][1] = f[i-1][1] + t[i][1];
            if (k==i)
                f[i][i] = f[i - 1][i - 1] + t[i][i];
        }
    }
    for (int i = 3; i <= r; i++) {
        for (int k = 2; k < i; k++) {
            f[i][k] = max(t[i][k] + f[i - 1][k], t[i][k] + f[i - 1][k - 1]);
        }
    }
    for (int i = 1; i <= r; i++) {
        if (f[r][i]>MAX)
            MAX = f[r][i];
    }
    /*
    for (int i = 1; i <= r; i++) {
        for (int k = 1; k <= i; k++) {
            printf("%d ", f[i][k]);
        }
        puts("");
    }
    */
    printf("%d", MAX);
    return 0;
}