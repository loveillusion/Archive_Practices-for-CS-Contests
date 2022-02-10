#include <bits/stdc++.h>

using namespace std;

int n, m;
char d[105][105];
int row, column;

int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int p=0; p<m; p++) {
            cin >> d[i][p];
        }
    }
    return 0;
}
