#include <bits/stdc++.h>

using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}

int main() {
    int x0, y0, ans = 0;
    cin >> x0 >> y0;
    for (int i=1; i<=sqrt(x0*y0); i++) {
        if (x0*y0%i==0 && gcd(x0*y0/i, i)==x0) {
            ans++;
        }
    }
    if (x0==y0) {
        cout << ans;
    } else {
        cout << ans*2;
    }
    return 0;
}
