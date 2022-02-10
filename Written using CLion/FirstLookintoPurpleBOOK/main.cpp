#include<bits/stdc++.h>

using namespace std;

int st[1000];

void print_subset(int n, int* A, int cur) {
    for (int i=0; i<cur; i++) printf("%d ", A[i]);
    printf("\n");
    int s = cur ? A[cur-1]+1 : 0;
    for (int i=s; i<n; i++) {
        A[cur] = i;
        print_subset(n, A, cur+1);
    }
}

int main() {
    print_subset(3, st, 0);
    return 0;
}