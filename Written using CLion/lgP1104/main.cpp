#include <bits/stdc++.h>

using namespace std;

char d[105][105];
char ans[105][105];
char save[8] = {'!', 'y', 'i', 'z', 'h', 'o', 'n', 'g'};
int n;
bool fil = false, check=false;

void dfs(int c, int w1, int w2, int a, int b) {
    if (c==7) {
        ans[a + w1][b + w2] = save[c];
        fil = true;
        check = true;
        return;
    }
    if (c==2) {
        for (int i = -1; i <= 1; i++) {
            if (a + i < 0 || a + i >= n)
                continue;
            for (int p = -1; p <= 1; p++) {
                if (b + p < 0 || b + p >= n)
                    continue;
                if (d[a + i][b + p] == save[c]) {
                    //cout << i << " " << p << endl;
                    dfs(c + 1, i, p, a + i, b + p);
                    if (fil) {
                        ans[a + i][b + p] = save[c];
                    }
                    fil = false;
                }
            }
        }
    } else {
        if (d[a + w1][b + w2] == save[c] && a + w1 >= 0 && a + w1 < n && b + w2 >= 0 && b + w2 < n) {
            //cout << w1 << " " << w2 << endl;
            dfs(c + 1, w1, w2, a + w1, b + w2);
            if(fil) {
                ans[a + w1][b + w2] = save[c];
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int p=0; p<n; p++) {
            cin >> d[i][p];
        }
    }
    for (int i=0; i<n; i++) {
        for (int p=0; p<n; p++) {
            ans[i][p]='*';
        }
    }
    for (int i=0; i<n; i++) {
        for (int p=0; p<n; p++) {
            if (d[i][p]=='y') {
                fil = false;
                dfs(2, 0, 0, i, p);
                if(check) {
                    ans[i][p]='y';
                }
                check = false;
                //cout << endl;
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int p=0; p<n; p++) {
            cout << ans[i][p];
        }
        cout << endl;
    }
    return 0;
}
