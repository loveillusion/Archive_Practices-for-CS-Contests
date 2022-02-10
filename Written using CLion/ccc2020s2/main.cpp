#include <bits/stdc++.h>
using namespace std;
struct can {
    int x;
    int y;
};

int main()
{
    vector<vector<int>>a;
    queue<can>b;
    int n, m, t;
    cin >> m;
    cin >> n;
    bool step = false;
    for (int i = 0; i < m; ++i) {
        a.emplace_back(vector<int>{});
        for (int j = 0; j < n; ++j) {
            cin >> t;
            a[i].emplace_back(t);
        }
    }
    b.push(can{ 0,0 });
    while (!step && !b.empty()) {
        t = a[b.front().x][b.front().y];
        a[b.front().x][b.front().y] = -1;
        //cout << t << endl;
        b.pop();
        for (int i = 1; i <= t; ++i) {
            if (t % i == 0 && i <= m && t / i <= n) {
                int r = t / i;
                int aa = i - 1, bb = r - 1;
                if (i == m && r == n)
                {
                    cout << "yes";
                    return 0;
                }
                else if (a[aa][bb] != -1) {
                    b.push(can{ aa,bb });
                }
            }
        }

    }cout << "no";
}
