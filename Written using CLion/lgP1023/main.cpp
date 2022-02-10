#include <bits/stdc++.h>

using namespace std;

int main() {
    int exp;
    cin >> exp;
    int v[100005][3];
    int cnt=0;
    while (true) {
        cin >> v[cnt][0] >> v[cnt][1];

        if (v[cnt][0]==-1 && v[cnt][1]==-1)
            break;

        if (cnt>0&&v[cnt][0]-v[cnt-1][0]>1) {
            int diff = (v[cnt-1][1]-v[cnt][1])/(v[cnt][0]-v[cnt-1][0]);
            int temp = v[cnt][0];
            for (int i=v[cnt-1][0]+1; i<=temp; i++) {
                v[cnt][0]=i;
                v[cnt][1]=v[cnt-1][1]-diff;
                cnt++;
            }
            cnt--;
        }

        cnt++;
    }
    int extra;
    cin >> extra;

    while (true) {
        v[cnt][0]=v[cnt-1][0]+1;
        v[cnt][1]=v[cnt-1][1]-extra;
        if (v[cnt][1]<=0)
            break;
        cnt++;
    }

    int t=1, maxprt, maxprc, s;
    while (true) {
        maxprt = -999;
        maxprc = 0;
        for (int i = 0; i < cnt; i++) {
            int talprt = (v[i][0] - v[0][0] + t) * v[i][1];
            if (maxprt <= talprt) {
                maxprt = talprt;
                maxprc = v[i][0];
                s=1;
            }
        }
        if (maxprc == exp) {
            cout << t*s;
            return 0;
        }
        maxprt = -999;
        maxprc = 0;
        for (int i = 0; i < cnt; i++) {
            int talprt = (v[i][0] - v[0][0] - t) * v[i][1];
            if (maxprt <= talprt) {
                maxprt = talprt;
                maxprc = v[i][0];
                s=-1;
            }
        }
        if (maxprc == exp) {
            cout << t*s;
            return 0;
        }
        t++;
    }
}
