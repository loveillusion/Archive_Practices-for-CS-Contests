#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Na, Nb;
    cin >> N >> Na >> Nb;
    int a[Na];
    int b[Nb];
    int aw=0, bw=0, cnta=0, cntb=0;
    for (int i=0; i<Na; i++)
        cin >> a[i];
    for (int i=0; i<Nb; i++)
        cin >> b[i];
    for (int i=0; i < N; i++) {
        if(a[cnta] == 0 && b[cntb] == 1)bw++;
        if(a[cnta] == 0 && b[cntb] == 2)aw++;
        if(a[cnta] == 0 && b[cntb] == 3)aw++;
        if(a[cnta] == 0 && b[cntb] == 4)bw++;
        if(a[cnta] == 1 && b[cntb] == 0)aw++;
        if(a[cnta] == 1 && b[cntb] == 2)bw++;
        if(a[cnta] == 1 && b[cntb] == 3)aw++;
        if(a[cnta] == 1 && b[cntb] == 4)bw++;
        if(a[cnta] == 2 && b[cntb] == 0)bw++;
        if(a[cnta] == 2 && b[cntb] == 1)aw++;
        if(a[cnta] == 2 && b[cntb] == 3)bw++;
        if(a[cnta] == 2 && b[cntb] == 4)aw++;
        if(a[cnta] == 3 && b[cntb] == 0)bw++;
        if(a[cnta] == 3 && b[cntb] == 1)bw++;
        if(a[cnta] == 3 && b[cntb] == 2)aw++;
        if(a[cnta] == 3 && b[cntb] == 4)aw++;
        if(a[cnta] == 4 && b[cntb] == 0)aw++;
        if(a[cnta] == 4 && b[cntb] == 1)aw++;
        if(a[cnta] == 4 && b[cntb] == 2)bw++;
        if(a[cnta] == 4 && b[cntb] == 3)bw++;
        cnta++;
        cntb++;
        if (cnta==Na)
            cnta=0;
        if (cntb==Nb)
            cntb=0;
    }
    cout << aw << " " << bw;
    return 0;
}
