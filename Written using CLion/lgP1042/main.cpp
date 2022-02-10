#include <bits/stdc++.h>

using namespace std;

int main() {
    string m[25000];
    int sxxi[25000][2];
    int sxi[25000][2];
    char ch=0;
    int cntsxxi=0;
    int cntsxi=0;
    int cnt=0;
    while (cin>>m[cnt]) {

        for (int i=0; i<m[cnt].size(); i++) {
            ch = m[cnt].at(i);
            if (ch=='E') {
                break;
            } else if (ch=='W') {
                sxxi[cntsxxi][0]++;
                sxi[cntsxi][0]++;
            } else if (ch=='L') {
                sxxi[cntsxxi][1]++;
                sxi[cntsxi][1]++;
            }
            if ((sxxi[cntsxxi][0]-sxxi[cntsxxi][1]>=2 || sxxi[cntsxxi][1]-sxxi[cntsxxi][0]>=2) && (sxxi[cntsxxi][0]>=21 || sxxi[cntsxxi][1]>=21)) { //21分W-L>2
                cntsxxi++;
            }
            if ((sxi[cntsxi][0]-sxi[cntsxi][1]>=2 || sxi[cntsxi][1]-sxi[cntsxi][0]>=2) && (sxi[cntsxi][0]>=11 || sxi[cntsxi][1]>=11)) {
                cntsxi++;
            }
        }

        if (ch=='E') {
            break;
        }
        cnt++;
    }

    for (int i=0; i<=cntsxi; i++) {
        cout << sxi[i][0] << ":" << sxi[i][1] << endl;
    }
    cout << endl;
    for (int i=0; i<=cntsxxi; i++) {
        cout << sxxi[i][0] << ":" << sxxi[i][1] << endl;
    }
    return 0;
}
