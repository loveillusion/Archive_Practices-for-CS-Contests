#include <bits/stdc++.h>

using namespace std;

int f[10005], n, m;

int main() {
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> f[i];
    }
    while (m>0) {
        next_permutation(f, f+n);
        m--;
    }
    for (int i=0; i<n; i++) {
        cout << f[i] << " ";
    }
    return 0;
}
