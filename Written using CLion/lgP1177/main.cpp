#include <bits/stdc++.h>

using namespace std;

int n,arr[1000001];

void quickSort(int l, int r) {
    if (l < r) {
        int p = arr[(l + r) / 2]; //pivot: median
        int i = l;
        int j = r;
        while (i <= j) {
            while (arr[i] < p) //查找左半部分比中间数大的数
                i++;
            while (arr[j] > p) //查找右半部分比中间数小的数
                j--;
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        quickSort(l, j);
        quickSort(i, r);
    }
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
