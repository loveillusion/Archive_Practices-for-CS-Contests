#include <bits/stdc++.h>

using namespace std;

int n, ans=0, op[60000][11], num[11];

void dfs(int cr, int lf) {
    if (cr==11 && lf==0) {
        ans++;
        for (int m=1; m<11; m++) {
            op[ans][m]=num[m];
        }
        return;
    }
    if (cr==11)
        return;
    if (lf<0)
        return;

    for (int i=1; i<=3; i++) {
        num[cr]=i;
        dfs(cr + 1, lf - i);
    }
}

int main() {
    cin>>n;
    dfs(1,n);
    cout << ans << endl;
    for (int i=1; i<=ans; i++) {
        for (int m=1; m<11; m++)
            cout << op[i][m] << " ";
        cout << endl;
    }
    return 0;
}
