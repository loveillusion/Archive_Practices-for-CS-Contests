#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;
    int left = 1, right = 2, sum=3;
    while (left<right && right<sum) {
        if (sum==m) {
            cout << left << " " << right << endl;
            sum-=left;
            left++;
        } else if (sum<m) {
            right++;
            sum+=right;
        } else {
            sum-=left;
            left++;
        }
    }
    return 0;
}
