#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int A=0, B=0;
    int ans = 0;
    bool at=true, bt=false;
    cin >> n;
    int p[n];
    for (int i=0; i<n; i++) {
        cin >> p[i];
    }
    sort(p, p+n);

    int diff = 0;
    int pos[n];
    bool posd[n];
    for (int i=0; i<n; i++) {
        posd[i]=true;
    }
    int q=0;
    for (int i = n - 1; i >= 1; i--) {
        if (p[i]-p[i-1] > diff && posd[q]) {
            diff=p[i]-p[i-1];
            pos[q]=i;
            q++;
            posd[q]=false;
        }
    }

    for (int i=0; i<n; i++) {
        cout << pos[i] << endl;
    }

    /*
    for (int i = n - 1; i >= 0; i--) {
        if (at)
            A += p[i];
        if (bt)
            B += p[i];
        at = !at;
        bt = !bt;
    }
    */

    cout << ans;
    return 0;
}
