#include <bits/stdc++.h>

using namespace std;

double s, x, d1, d2, t=0, d=7;

int main() {
    cin >> s >> x;
    d1 = s-x;
    d2 = s+x;
    while (true) {
        if (t>=d1) {
            t+=d;
            if (t > d2) {
                cout << "n";
                break;
            } else {
                cout << "y";
                break;
            }
        }
        t+=d;
        d=7*0.98;
    }
    return 0;
}
