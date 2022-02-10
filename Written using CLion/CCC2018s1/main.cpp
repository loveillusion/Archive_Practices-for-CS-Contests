#include <bits/stdc++.h>

using namespace std;

int n;
double v[105];
double d[105];

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v, v+n);
    for (int i=1; i<n-1; i++) {
        d[i]=abs((v[i]-v[i-1])/2+(v[i+1]-v[i])/2);
    }
    double min=1000000005.0;
    for (int i=1; i<n-1; i++) {
        if (d[i]<min) {
            min = d[i];
        }
    }
    cout.precision(1);
    cout << fixed << min;
    return 0;
}
