#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s[10005];
    int total=0;
    for (int i=0; i<n; i++) {
        cin >> s[i];
        total+=s[i];
    }
    int avg = total/n;
    int ans = 0;
    int temp;
    for (int i=0; i<n; i++) {
        if (avg==s[i])
            continue;
        else if(s[i]>avg) {
            temp = s[i]-avg;
            s[i+1] = s[i+1] + temp;
            s[i] = s[i] - temp;
            ans++;
        } else if (s[i]<avg) {
            temp = avg-s[i];
            s[i+1] = s[i+1] - temp;
            s[i] = s[i] + temp;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
