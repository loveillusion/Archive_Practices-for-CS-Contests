#include <bits/stdc++.h>

using namespace std;

struct minister {
    int left;
    int right;
}; minister m[10005];

int n;

int main() {
    cin >> n;
    for (int i=0; i<=n; i++) {
        cin >> m[i].left >> m[i].right;
    }
    return 0;
}
