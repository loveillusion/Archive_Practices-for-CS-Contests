#include <cstdio>

using namespace std;

int n, m, p;
int x[5500];
int xi[5500], yi[5500];

int origin(int a) {
    if(a==x[a])
        return a;
    return x[a]=origin(x[a]);
}

int ask(int a, int b) {
    if(origin(a)==origin(b))
        return 1;
    return 0;
}

void uni(int a, int b) {
    if(ask(a,b))
        return;
    x[origin(a)] = x[b];
}

int main() {
    scanf("%d %d %d", &n, &m, &p);

    for (int i = 0; i <= n; i++){
        x[i] = i;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &xi[i], &yi[i]);
    }

    for (int i = 0; i < m; i++) {
        uni(xi[i], yi[i]);
    }

    for (int i = 0; i < p; i++) {
        scanf("%d %d", &xi[i], &yi[i]);
    }

    for (int i = 0; i < p; i++) {
        if(ask(xi[i], yi[i])) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}