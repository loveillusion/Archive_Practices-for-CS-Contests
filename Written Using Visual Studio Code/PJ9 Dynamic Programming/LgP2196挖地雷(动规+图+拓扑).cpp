#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>

//状态转移方程：dp[next[i].y] = max(dp[i] + num[next[i].y], dp[next[i].y])

using namespace std;

//邻接链表储存图
struct edg {
    int next, y;
} e[100000];

int ltp = 0, lk[25];

void insert(int x, int y) {
    //x和y表示要建立一个从x指向y的结点，无向图需要再建立反向边
    e[++ltp] = (edg){lk[x], y};
    //让ltp+1，分配一个新链结，它的下一个结点是y，下一个链结是lk[x]
    lk[x] = ltp;
    //让链表的第一个结点等于新分配的链结
}

int n, num[25], temp, incnt[25], dp[25], dpinfo[25];

int q[100000], hd = 0; //q是队列，hd是队尾
void bfs() { //topsort 拓扑排序 + bfs
    for (int k = 1; k <= hd; k++) { //k是队头
        //cout << "队首：" << q[k] << ", dp[i] = " << dp[q[k]] << ", dpinfo[i] = " << dpinfo[q[k]] << "\n";
        for (int i = lk[q[k]]; i; i = e[i].next) { //遍历链结
            incnt[e[i].y]--; //连接到的结点入度-1
            if (incnt[e[i].y]==0)
                q[++hd] = e[i].y; //入度为0就入队

            if (dp[q[k]] + num[e[i].y] > dp[e[i].y]) {
                dp[e[i].y] = dp[q[k]] + num[e[i].y];
                dpinfo[e[i].y] = q[k];
            }
        }
    }
}

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
        dp[i] = num[i];
    }

    for (int i = 1; i < n; i++) { //将图插入链表
        for (int j = i + 1; j <= n; j++) {
            scanf("%d", &temp);
            if (temp == 1) {
                insert(i, j);
                incnt[j]++; //入度
            }
        }
    }

    /*
    for (int i = 1; i <= n; i++) { //遍历图的链接
        cout << "Number: " << i << ", Connection: ";
        for (int k = lk[i]; k; k = e[k].next) {
            cout << e[k].y << " ";
        }
        cout << "\n";
    }
    */

    for (int i = 1; i <= n; i++) {
        //cout << "Number: " << i << ", 入度：" << incnt[i] << "\n";
        if (incnt[i] == 0) //如果入度为0
            q[++hd] = i; //入队
    }
    bfs();

    int MAX = -1, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (MAX < dp[i]) {
            MAX = dp[i];
            ans = i;
        }
    }

    string s = "";
    for (int i = ans; i; i = dpinfo[i]) {
        string c = to_string(i);
        s = ' ' + s;
        s = c + s;
    }

    cout << s << "\n" << dp[ans];
}