#include <cstdio>
#include <array>

using namespace std;

int seq[10000];

int Binary_Search (int l, int r, int x) {
    if(l>r)
        return -1;
    int mid = (l + r) >> 1;
    if(seq[mid]==x)
        return mid;
    if(x<seq[mid])
        return Binary_Search(l, mid - 1, x);
    if(x>seq[mid])
        return Binary_Search(mid + 1, r, x);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &seq[i]);
    }
    int ask;
    scanf("%d", &ask);
    int min = 1, max = n, mid, ans = 0;
    while (min<max) {
        mid = (max+min+1)>>1;
        if (seq[mid] == ask) {
            ans = 1;
            break;
        } else if (seq[mid] > ask) {
            max = mid;
        } else if (seq[mid] < ask) {
            min = mid;
        }
    }
    if (ans == 0)
        printf("Can't find it.");
    else
        printf("Find at position: %d", mid);
    getchar();
    return 0;
}