#include <cstdio>

using namespace std;

int L, N, M, rocks[50050];

int check(int len) {
    int pick = 0;
    int last = 0;
    for (int i = 0; i < N; i++) {
        if ((rocks[i]-last)<len)
            pick++;
        else
            last = rocks[i];
    }
    if (pick<=M)
        return 1;
    else
        return 0;
}

int main() {
    scanf("%d %d %d", &L, &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%d", &rocks[i]);
    }

    int l = 0, r = L;
    while(l <= r)
    {
        int mid = (l + r) >> 1;
        if(check(mid)) l = mid + 1;
        else r = mid - 1;
    }

    printf("%d", r);

    return 0;
}