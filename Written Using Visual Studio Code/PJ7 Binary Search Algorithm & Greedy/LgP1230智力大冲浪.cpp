#include <cstdio>
#include <algorithm>

using namespace std;

struct prj {
    int t, w;
}; prj p[505];

int compare(const prj &a, const prj &b) {
    return a.w > b.w;
}

int n, m, mark[505] = {0};

int ins(prj a) {
    for (int i = a.t; i > 0; i--) {
        if (mark[i] == 0) {
            mark[i] = 1;
            return 1;
        }
    }
    return 0;
}

int main() {
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i].t);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i].w);
    }
    sort(p + 1, p + n +1, compare);
    for (int i = 1; i <= n; i++) {
        if (!ins(p[i])) {
            m -= p[i].w;
        }
    }
    printf("%d", m);
    return 0;
}