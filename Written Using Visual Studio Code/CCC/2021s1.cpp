#include <cstdio>

using namespace std;

double n;
double h[100000];
double w[100000];
double ans = 0;

int main() {
    scanf("%lf", &n);
    for (int i = 1; i <= n+1; i++) {
        scanf("%lf", &h[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%lf", &w[i]);
    }
    for (int i = 1; i <= n; i++) {
        double area = (h[i] + h[i + 1]) * w[i] / 2;
        ans += area;
    }
    printf("%f", ans);
}