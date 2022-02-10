#include <bits/stdc++.h>

using namespace std;

struct peanut{//用结构体存坐标和数量及时间。（x，y坐标，time时间，w数量）
    int x,y,time,w;
};  peanut p[100001];

int main() {
    int field[25][25], k, m, n;
    int cnt=0;
    cin >> m >> n >> k;
    for (int i=0; i<m; i++) {
        for (int ii=0; ii<n; ii++) {
            cin >> field[i][ii];
            if(field[i][ii]>0) {//当它下面有花生的时候就存它的数据。
                p[cnt].w = field[i][ii];
                p[cnt].x = i+1;
                p[cnt].y = ii+1;
                cnt++;
            }
        }
    }

    for (int i = 0; i < cnt; i++) { // times
        for (int j = 0; j < cnt - i - 1; j++) { // position
            if (p[j].w < p[j + 1].w) {
                swap(p[j], p[j+1]);
            }
        }
    }

    int re=0, ans=0;
    for (int i=0; i<cnt; i++) {
        re=p[i].x;//由于我们要考虑多多采花生返回，而返回的路程就是深度即x，如果加上这个x可以按时返回的话就采这个花生。
        if(i==0) {
            p[i].time=p[i].x+1;  //第一个花生是不同的，因为多多一开始可以跳到第一个最多花生的所在列。
        } else {
            p[i].time=p[i-1].time+abs(p[i].x-p[i-1].x)+abs(p[i].y-p[i-1].y)+1;//不是第一个的话就加上与前一个的坐标差再加采摘时间。
        }
        if (p[i].time+re<=k) {
            ans+=p[i].w;//如果可以按时返回那么就把花生数加上。
        }
    }

    cout << ans;
    return 0;
}
