#include<bits/stdc++.h>

using namespace std;

struct Node {
    int xc, yc, ans; //x coordinate & y coordinate
    Node(int xc=0, int yc=0, int ans=0):xc(xc),yc(yc),ans(ans) {}
};

int n, m; //棋盘
int xc1, yc1; //马的初始坐标
int d[405][405]; //marked
int salvation[405][405]; //save answer

bool inside(int r, int c) { //检测出界
    return r >= 1 && r <= n && c >= 1 && c <= m;
}

Node hop(const Node& u, int turn) {
    if (turn == 0) {
        return Node(u.xc-2, u.yc-1, u.ans+1);
    } else if (turn == 1) {
        return Node(u.xc-1, u.yc-2, u.ans+1);
    } else if (turn == 2) {
        return Node(u.xc+1, u.yc-2, u.ans+1);
    } else if (turn == 3) {
        return Node(u.xc+2, u.yc-1, u.ans+1);
    } else if (turn == 4) {
        return Node(u.xc+2, u.yc+1, u.ans+1);
    } else if (turn == 5) {
        return Node(u.xc+1, u.yc+2, u.ans+1);
    } else if (turn == 6) {
        return Node(u.xc-1, u.yc+2, u.ans+1);
    } else if (turn == 7) {
        return Node(u.xc-2, u.yc+1, u.ans+1);
    }
}

void solve() {
    queue<Node> q;
    memset(d, -1, sizeof(d));
    memset(salvation, -1, sizeof(salvation));
    Node uu(xc1, yc1, 0);
    d[uu.xc][uu.yc] = 0;
    salvation[uu.xc][uu.yc] = 0;
    q.push(uu);
    while(!q.empty()) {
        Node u = q.front(); q.pop();
        for (int i=0; i<8; i++) {
            Node v = hop(u, i);
            if (inside(v.xc, v.yc) && d[v.xc][v.yc] < 0) {
                d[v.xc][v.yc] = d[v.xc][v.yc]+1;
                salvation[v.xc][v.yc] = v.ans;
                q.push(v);
            }
        }
    }
}

int main() {
    cin >> n >> m >> xc1 >> yc1;
    solve();
    for (int i=1; i<=n; i++) {
        for (int ii=1; ii<=m; ii++) {
            printf("%-5d", salvation[i][ii]);
        }
        printf("\n");
    }
    return 0;
}
