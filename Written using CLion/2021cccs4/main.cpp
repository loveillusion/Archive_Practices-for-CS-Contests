//Dijkstra
#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;

int n, m, d;
int cnt, head[200005];
pair<int, int> e[200005];
int s[200005];
int f[100005], vis[100005];

struct Edge
{
    int to, next, dis;
} edge[200005];

void Add_edge(int from, int to)
{
    edge[++cnt].dis = 1;
    edge[cnt].to = to;
    edge[cnt].next = head[from];
    head[from] = cnt;
}

struct node
{
    int dis, id;
    bool operator<(const node &a) const { return a.dis < dis; }
};

void Dijkstra()
{
    priority_queue<node> q;
    q.push(node{0, 1});
    for (int i = 1; i <= n; i++)
    {
        f[i] = INF;
        vis[i] = 0;
    }
    f[1] = 0;
    while (!q.empty())
    {
        node a = q.top();
        q.pop();
        int now = a.id;
        if (vis[now])
            continue;
        int i = head[now];
        vis[now] = 1;
        for (; i; i = edge[i].next)
        {
            //printf("%d\n",edge[i].to);
            int j = edge[i].to;
            if (f[now] + edge[i].dis < f[j])
            {
                f[j] = f[now] + edge[i].dis;
                q.push(node{f[j], j});
            }
        }
    }
}

inline int read()
{
    int ret = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        ret = ret * 10 + ch - '0', ch = getchar();
    }
    return ret;
}

int main()
{
    int u, v;
    n = read();
    m = read();
    d = read();
    for (int i = 1; i <= m; i++)
    {
        e[i].first = read();
        e[i].second = read();
    }
    for (int i = 1; i <= n; i++)
    {
        s[i] = read();
    }
    for (int i = 1; i <= d; i++)
    {
        u = read();
        v = read();
        swap(s[u], s[v]);
        cnt = 0;
        memset(head, 0, sizeof(int) * (n + m));
        for (int j = 1; j <= m; j++)
            Add_edge(e[j].first, e[j].second);
        for (int j = 1; j < n; j++)
            Add_edge(s[j], s[j + 1]);
        Dijkstra();
        printf("%d\n", f[n]);
    }
}