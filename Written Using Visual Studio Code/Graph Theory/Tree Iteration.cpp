#include <cstdio>

using namespace std;

//邻接链表

struct edg {
    int next, y;
} e[210000]; //两倍边
//e是链结，y是边的下一个端点，next是下一个链结的下标

int ltp = 0, lk[110000] = {0};
//ltp类似于栈的top，用来随时分配新的链结
//lk是link，lk[i]表示结点i的链表的第一个的链结的下标

void insert(int x, int y) { //在链表前插入一个链结（或者说往图里插入一条边）
    //x和y表示要建立一个从x指向y的结点，无向图需要再建立反向边
    e[++ltp] = (edg){lk[x], y};
    //让ltp+1，分配一个新链结，它的下一个结点是y，下一个链结是lk[x]
    lk[x] = ltp;
    //让链表的第一个结点等于新分配的链结
}

//遍历树

int n;

int q[110000], hd = 0;
int f[110000]; // 因为存的双向边，所以要记忆化
void bfs(int x) {
    q[hd = 1] = x;
    for (int k = 1; k <= hd; k++) {
        for (int i = lk[q[k]]; i; i=e[i].next) {
            if (!f[e[i].y]) {
                q[++hd] = e[i].y;
                f[e[i].y] = true;
            }
        }
    }

    for (int i = 1; i <= hd; i++) {
        printf("%d ", q[i]);
    }
    puts("");
}

void dfs(int x, int y) { //y表示x的父节点
    printf("%d ", x);
    for (int i = lk[x]; i; i = e[i].next) {
        if (e[i].y!=y) //dfs只需避免遍历父亲即可
            dfs(e[i].y, x); //不用记忆化
    }
    //当然bfs可以通过记录父节点的方式防止死循环
}

int main() {
    scanf("%d", &n);
    int l, r;
    for (int i = 1; i < n; i++) {
        scanf("%d%d", &l, &r);
        insert(l, r);
    }
    bfs(1);
    dfs(1, 0);
    return 0;
}
