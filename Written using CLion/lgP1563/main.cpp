#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int face[n]; // 0 = inside, 1 = outside
    string name[n];
    int lr[m]; // 0 = left, 1 = right
    int step[m];
    for (int i=0; i<n; i++) {
        cin >> face[i] >> name[i];
    }
    for (int i=0; i<m; i++) {
        cin >> lr[i] >> step[i];
    }
    int cr = 0;
    int crpos = face[cr];
    for (int i=0; i<m; i++) { // inside: left-,right+; outside: left+,right-
        if (crpos) { // 1=outside
            if (lr[i]) { //1=right
                cr-=step[i];
            } else { //0=left
                cr+=step[i];
            }
        } else { //0=inside
            if (lr[i]) {
                cr+=step[i];
            } else {
                cr-=step[i];
            }
        }

        while (cr<0) {
            cr+=n;
        }

        while (cr>n-1) {
            cr-=n;
        }

        crpos = face[cr];
    }
    cout << name[cr];
    return 0;
}
