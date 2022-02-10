#include <bits/stdc++.h>

using namespace std;

int main() {
    double n1, n2, n3;
    double c1, c2, c3;
    double f1, f2, f3;
    cin >> n1 >> n2 >> n3;
    if (n1<n2 && n2<n3) {
        cout << "Possible";
        return 0;
    }
    f1 = n1*1.8+32;
    f2 = n2*1.8+32;
    f3 = n3*1.8+32;
    c1 = (n1-32)/1.8;
    c2 = (n2-32)/1.8;
    c3 = (n3-32)/1.8;
    if (c1<c2 && c2<c3) {
        cout << "Possible";
        return 0;
    }
    if (n1<c2 && c2<c3) {
        cout << "Possible";
        return 0;
    }
    if (c1<n2 && n2<c3) {
        cout << "Possible";
        return 0;
    }
    if (n1<n2 && n2<c3) {
        cout << "Possible";
        return 0;
    }
    if (f1<f2 && f2<f3) {
        cout << "Possible";
        return 0;
    }
    if (n1<n2 && n2<f3) {
        cout << "Possible";
        return 0;
    }
    if (f1<n2 && n2<f3) {
        cout << "Possible";
        return 0;
    }
    if (n1<f2 && f2<f3) {
        cout << "Possible";
        return 0;
    }
    if (c1<c2 && c2<n3) {
        cout << "Possible";
        return 0;
    }
    if (f1<f2 && f2<n3) {
        cout << "Possible";
        return 0;
    }
    if (n1<c2 && c2<n3) {
        cout << "Possible";
        return 0;
    }
    if (c1<n2 && n2<n3) {
        cout << "Possible";
        return 0;
    }
    if (f1<n2 && n2<n3) {
        cout << "Possible";
        return 0;
    }
    if (n1<f2 && f2<n3) {
        cout << "Possible";
        return 0;
    }
    cout << "Impossible";
    return 0;
}
