#include <bits/stdc++.h>

using namespace std;

string sa, sb;
int cnt = 0, ans = 0;

struct changeab {
    string a;
    string b;
}; changeab c[6];

void bfs() {
    
}

int main() {
    cin >> sa >> sb;
    while (cin >> c[cnt].a >> c[cnt].b) {
        cnt++;
    }

    if (ans<=10 && ans>0) {
        cout << ans;
    } else {
        cout << "NO ANSWER!";
    }
    return 0;
}
