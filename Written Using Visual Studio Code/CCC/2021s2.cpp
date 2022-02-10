#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

long long m; //row: top down
long long n; //coloumn: left right
long long k;
bool r[5000005];
bool c[5000005];
long long ans;

int main() {
    scanf("%lld", &m);
    scanf("%lld", &n);
    scanf("%lld", &k);

    //printf("%d %d %d \n", m, n, k);

    for (int i = 1; i <= k; i++) {
        char ch;
        long long p;
        //scanf("%c%lld", &ch, &p);
        cin >> ch;
        cin >> p;
        if (ch == 'R') {
            r[p] = !r[p];
        }
        if (ch == 'C') {
            c[p] = !c[p];
        }
        //printf("%c%lld\n", ch, p);
    }

    int rb = 0, rg = 0;
    int cb = 0, cg = 0;
    for (int i = 1; i <= m; i++) {
        if (r[i] == 0) {
            rb++;
        } else if (r[i] == 1) {
            rg++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (c[i] == 0) {
            cb++;
        } else if (c[i] == 1) {
            cg++;
        }
    }

    ans = (long long) rb * cg + rg * cb;
    printf("%lld", ans);
}