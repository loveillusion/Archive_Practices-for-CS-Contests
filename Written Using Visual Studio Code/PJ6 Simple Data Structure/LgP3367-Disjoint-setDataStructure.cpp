#include <cstdio>

using namespace std;

int n, m;
int x[10050];
int z[200050], xi[200050], yi[200050];

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
    scanf("%d %d", &n, &m);

    for (int i = 0; i <= n; i++){
        x[i] = i;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &z[i], &xi[i], &yi[i]);
    }

    for (int i = 0; i < m; i++) {
        if (z[i]==1)
            uni(xi[i], yi[i]);
        if (z[i]==2) {
            if(ask(xi[i], yi[i])) {
                printf("Y");
                puts("");
            }
            else {
                printf("N");
                puts("");
            }
        }
    }
    return 0;
}