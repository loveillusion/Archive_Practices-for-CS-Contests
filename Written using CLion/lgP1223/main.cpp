#include <bits/stdc++.h>

using namespace std;

int n;
double ans=0;

struct fil {
    int t;
    int s;
}; fil f[1005];

bool compare (fil f1, fil f2) {
    if (f1.t==f2.t) {
        return f1.s<f2.s;
    }
    return f1.t<f2.t;
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> f[i].t;
        f[i].s=i+1;
    }
    sort(f, f+n, compare);
    for (int i=0; i<n; i++) {
        cout << f[i].s << " ";
    }
    cout << endl;
    for (int i=1; i<n; i++) {
        for (int c=0; c<i; c++) {
            ans += f[c].t;
        }
    }
    ans/=n;
    cout.precision(2);
    cout << fixed << ans;
    return 0;
}
