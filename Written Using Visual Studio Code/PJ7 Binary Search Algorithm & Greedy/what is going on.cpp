#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int a[5] = {0, 2, 4, 6, 8};
    printf("%d %d %d\n", lower_bound(a, a + 5, 2) - a, upper_bound(a, a + 5, 2) - a, binary_search(a, a + 5, 2));
}