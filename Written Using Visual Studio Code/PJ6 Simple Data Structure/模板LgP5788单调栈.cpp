#include <cstdio>

using namespace std;

int n, ans[3000050], a[3000050], st[3000050], cnt = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    st[++cnt] = 1;

    for (int i = 2; i <= n; i++) {
        while(a[i]>a[st[cnt]]) {
            ans[st[cnt]] = i;
            cnt--;
            if(cnt==0)
                break;
        }
        st[++cnt]=i;
    }
    while(cnt>0) {
        ans[st[cnt--]] = 0;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}