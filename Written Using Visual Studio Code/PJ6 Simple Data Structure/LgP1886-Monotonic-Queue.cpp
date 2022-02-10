#include <cstdio>
#include <queue>

using namespace std;

int n, k;
long long a[1000050];
int ansmin[1000050], ansmax[1000050];
deque<int> qmin, qmax;

void insmin(int front, int rear) {
    while(a[qmin.front()]>=a[front]) {
        qmin.pop_front();
        if(qmin.empty()) {
            break;
        }
    }
    qmin.push_front(front);
    if(qmin.back()<rear) {
        qmin.pop_back();
    }
}

void insmax(int front, int rear) {
    while(a[qmax.front()]<=a[front]) {
        qmax.pop_front();
        if(qmax.empty()) {
            break;
        }
    }
    qmax.push_front(front);
    if(qmax.back()<rear) {
        qmax.pop_back();
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }

    //put the first k-1 number into the queue
    qmin.push_front(1);
    qmax.push_front(1);
    for (int i = 2; i < k; i++) {
        insmin(i, 1);
        insmax(i, 1);
    }

    //实现单调队列
    for (int i = k; i <= n; i++) {
        insmin(i, i - k + 1);
        ansmin[i] = qmin.back();

        insmax(i, i - k + 1);
        ansmax[i] = qmax.back();
    }

    //prints answer
    for (int i = k; i <= n; i++) {
        printf("%lld ", a[ansmin[i]]);
    }
    puts("");
    for (int i = k; i <= n; i++) {
        printf("%lld ", a[ansmax[i]]);
    }

    return 0;
}