#include <bits/stdc++.h>

using namespace std;

int n, cl[15], bt[10000], tb[10000], ans[10000], cnt=0;

void dfs(int cr) {
    if (cr>n) {
        cnt++;
        if (cnt<=3) {
            for (int i=1; i<=n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    for (int i=1; i<=n; i++) {
        if (cl[i]==0 && bt[i+cr-1]==0 && tb[i-cr+1+n]==0) {
            ans[cr]=i;
            cl[i]=1;
            bt[i+cr-1]=1;
            tb[i-cr+1+n]=1;
            dfs(cr+1);
            cl[i]=0;
            bt[i+cr-1]=0;
            tb[i-cr+1+n]=0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    cout << cnt;
    return 0;
}
