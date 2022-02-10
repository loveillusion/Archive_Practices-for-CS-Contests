#include <cstdio>
#include <queue>

using namespace std;

int row, col;
int room[1005][1005];
int ans = 0;

struct node
{
    int r, c, center;
    node(int r = 10000, int c = 10000, int center = 0) : r(r), c(c), center(center) {}
};

void bfs()
{
    queue<node> q;
    node last(row, col, room[row][col]);
    q.push(last);

    while (!q.empty())
    {
        node u = q.front();
        q.pop();
        //printf("\nhuh? %d %d %d", u.r, u.c, u.center);

        int f = u.r * u.c;

        if (f == room[1][1])
        {
            ans = 1;
            return;
        }

        for (int i = 1; i <= row; i++)
        {
            for (int ii = 1; ii <= col; ii++)
            {
                if (f == room[i][ii])
                {
                    node v(i, ii, room[i][ii]);
                    q.push(v);
                }
            }
        }
    }
}

int main()
{
    scanf("%d", &row);
    scanf("%d", &col);
    for (int i = 1; i <= row; i++)
    {
        for (int ii = 1; ii <= col; ii++)
        {
            scanf("%d", &room[i][ii]);
        }
    }
    bfs();
    if (ans == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}
