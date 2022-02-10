#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int coe[n+1];
    for (int i=0; i<=n; i++)
        cin >> coe[i];
    int cnt=0;
    for (int i=0; i<=n; i++) {
        if (coe[i]==0) {
            cnt++;
            continue;
        }
        if (i!=0 && coe[i]>0)
            cout << "+";
        if (n-cnt==1) {
            if (coe[i]==1)
                cout <<"x";
            else if (coe[i]==-1)
                cout <<"-x";
            else
                cout << coe[i] << "x";
        } else if (cnt==n)
            cout << coe[i];
        else if (coe[i]==1)
            cout << "x^" << n-cnt;
        else if (coe[i]==-1)
            cout << "-x^" << n-cnt;
        else
            cout << coe[i] << "x^" << n-cnt;
        cnt++;
    }
    return 0;
}
