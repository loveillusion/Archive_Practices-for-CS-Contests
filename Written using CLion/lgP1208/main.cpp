#include <bits/stdc++.h>

using namespace std;

int n,m,ans=0,cnt=0;

struct milk {
    int pr;
    int am;
}; milk p[5005];

bool compare(milk m1, milk m2) {
    return m1.pr < m2.pr;
}

int main() {
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        cin >> p[i].pr >> p[i].am;
    }
    sort(p, p+m, compare);
    for (int i=0; i<m; i++) {
        for (int c=0; c<p[i].am; c++) {
            cnt++;
            ans+=p[i].pr;
            if (cnt==n) {
                break;
            }
        }
        if (cnt==n) {
            break;
        }
    }
    cout << ans;
    return 0;
}
