#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string S;
    int cntv = 0, cntc = 0;
    int ans=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, S);
    for (int i=0; i<n; i++) {
        char c = S[i];
        if (c==65 || c==97 || c==69 || c==101 || c==105 || c==73 || c==111 || c==79 || c==85 || c==117) {
            cntv++;
            cntc=0;
            if (cntv==4) {
                ans++;
                cntv=0;
                i-=1;
            }
        } else {
            cntc++;
            cntv=0;
            if (cntc==4) {
                ans++;
                cntc=0;
                i-=1;
            }
        }
    }
    cout << ans;
    return 0;
}
