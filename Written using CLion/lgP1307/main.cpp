#include <bits/stdc++.h>

using namespace std;

int main() {
    long r;
    string n;
    getline(cin, n);
    if (n[0]=='-')
        cout << "-";
    reverse(n.begin(), n.end());
    r = stoi(n);
    cout << r;
    return 0;
}
