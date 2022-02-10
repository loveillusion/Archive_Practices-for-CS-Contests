#include <cstdio>
#include <iostream>

using namespace std;

struct edg {
    int next, y;
} e[5000000];

int ltp = 0, lk[5050];

void insert(int x, int y) {
    //x和y表示要建立一个从x指向y的结点，无向图需要再建立反向边
    e[++ltp] = (edg){lk[x], y};
    //让ltp+1，分配一个新链结，它的下一个结点是y，下一个链结是lk[x]
    lk[x] = ltp;
    //让链表的第一个结点等于新分配的链结
}

int n, m, incnt[5050], outcnt[5050], ans = 0, cnt[5050];

int q[100000], hd = 0; //q是队列，hd是队尾
void bfs() { //topsort 拓扑排序 + bfs
    for (int k = 1; k <= hd; k++) { //k是队头
        //cout << "队首：" << q[k];
        for (int i = lk[q[k]]; i; i = e[i].next) { //遍历链结
            incnt[e[i].y]--; //连接到的结点入度-1
            cnt[e[i].y] += cnt[q[k]];
            cnt[e[i].y] %= 80112002;
            if (incnt[e[i].y]==0) {
                if (outcnt[e[i].y]==0) {
                    ans += cnt[e[i].y];
                    ans %= 80112002;
                    continue;
                }
                q[++hd] = e[i].y; //入度为0就入队
            }
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        insert(a, b);
        outcnt[a]++; //出度
        incnt[b]++; //入度
    }
    for (int i = 1; i <= n; i++) {
        //cout << "Number: " << i << ", 入度：" << incnt[i] << "\n";
        if (incnt[i] == 0) { //如果入度为0
            q[++hd] = i; //入队
            cnt[i] = 1;
        }
    }
    bfs();
    cout << ans;
}