#include <bits/stdc++.h>

using namespace std;

int n = 0;

void search(int c) {
    if (n!=0) {
        int power=0, base=1;
        cout << "2";
        while (base<=c) {
            power++;
            base*=2;
        }
        power--;
        c-=base/2;
        if (power==0 || power==2) {
            cout << "(" << power << ")";
        } else if (power!=1) {
            cout << "(";
            search(power);
            cout << ")";
        }
        if (c) {
            cout << "+";
            search(c);
        }
    }
}

int main() {
    cin >> n;
    search(n);
    return 0;
}
