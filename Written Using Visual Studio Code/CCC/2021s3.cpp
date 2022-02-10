#include <cstdio>
#include <iostream>

using namespace std;

long long n;
long long p[200005], w[200005], d[200005];
long long ans = 9223372036854775807;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%lld%lld%lld", &p[i], &w[i], &d[i]);
    }
    for (long long i = 0; i <= 2000000; i++) {
        long long temp = 0;
        for (long long k = 1; k <= n; k++) {
            if (p[k]>i) {
                if (p[k]-d[k]>i) {
                    temp += (p[k] - d[k] - i) * w[k];
                }
            }
            if (p[k]<i) {
                if (p[k]+d[k]<i) {
                    temp += (i - p[k] - d[k]) * w[k];
                }
            }
        }
        ans = min(ans, temp);
    }
    cout << ans;
}