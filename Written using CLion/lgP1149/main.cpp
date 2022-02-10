#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int num[10] = {6,2,5,5,4,5,6,3,7,6};

int numofmatch(int x)
{
    int s = 0;
    for(int i=x;i!=0;i/=10) {
        s += num[i % 10];
    }
    if (x==0) {
        s += num[0];
    }
    return s;
}

int main() {
    cin >> n;
    for (int i=0; i<1000; i++) {
        for (int m=0; m<1000; m++) {
            if (numofmatch(i)+numofmatch(m)+numofmatch(i+m)+4==n) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}