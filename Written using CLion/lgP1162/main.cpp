#include <bits/stdc++.h>

using namespace std;

int n, s[35][35], st[35][35];
int tx[4]={1,0,-1,0},ty[4]={0,-1,0,1};

void dfs(int a, int b) {
    if (a<0 || a>n+1 || b<0 || b>n+1 || s[a][b] != 0 || st[a][b] != 0) {
        return;
    }
    st[a][b]=1;
    for (int i=0; i<4; i++) {
        dfs(a + tx[i], b + ty[i]);
    }
}

int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int m=1; m<=n; m++) {
            cin >> s[i][m];
        }
    }

    dfs(0,0);
    for (int i=1; i<=n; i++) {
        for (int m=1; m<=n; m++) {
            if (st[i][m]==0 && s[i][m]==0) {
                cout << 2 << " ";
            } else {
                cout << s[i][m] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
