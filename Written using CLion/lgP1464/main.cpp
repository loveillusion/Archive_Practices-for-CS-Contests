#include <bits/stdc++.h>

using namespace std;

int w[21][21][21];

int main() {
    int n1,n2,n3;
    for (int m1=0; m1<21; m1++) {
        for (int m2=0; m2<21; m2++) {
            for (int m3=0; m3<21; m3++) {
                w[m1][m2][m3]=1;
            }
        }
    }
    for (int m1=1; m1<21; m1++) {
        for (int m2=1; m2<21; m2++) {
            for (int m3=1; m3<21; m3++) {
                if (m1<m2 && m2<m3) {
                    w[m1][m2][m3] = w[m1][m2][m3-1] + w[m1][m2-1][m3-1] - w[m1][m2-1][m3];
                } else {
                    w[m1][m2][m3] = w[m1-1][m2][m3] + w[m1-1][m2-1][m3] + w[m1-1][m2][m3-1] - w[m1-1][m2-1][m3-1];
                }
            }
        }
    }

    while (true) {
        cin >> n1 >> n2 >> n3;
        if (n1==-1 && n2==-1 && n3==-1)
            break;
        if (n1<=0 || n2<=0 || n3<=0) {
            cout << "w(" << n1 << ", " << n2 << ", " << n3 << ") = 1" << endl;
        } else if (n1>20 || n2>20 || n3>20) {
            cout << "w(" << n1 << ", " << n2 << ", " << n3 << ") = " << w[20][20][20] << endl;
        } else {
            cout << "w(" << n1 << ", " << n2 << ", " << n3 << ") = " << w[n1][n2][n3] << endl;
        }
    }
    return 0;
}
