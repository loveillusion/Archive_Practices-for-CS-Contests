#include <bits/stdc++.h>

using namespace std;

/*
 * 最大字段和
 */

int arr[200005];

//divide and conquer
int dac (int l, int r) {
    if ( l == r ) {
        return arr[l];
    }
    int mid = (l+r) >> 1; //divide number by half
    int sum = 0, lsub = INT_MIN, rsub = INT_MIN;
    for (int i = mid; i>=l; i--) {
        sum+=arr[i];
        lsub = max(lsub, sum);
    }
    sum = 0;
    for (int i = mid + 1; i<=r; i++) {
        sum+=arr[i];
        rsub = max(rsub, sum);
    }
    return max(max(dac(l, mid), dac(mid+1, r)), lsub+rsub);
}

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    cout << dac(1, n);
    return 0;
}
