#include <bits/stdc++.h>

using namespace std;

int n, k, s[20];
long long cntans = 0;

bool isprime(int num)
{
    if (num == 2) {
        return true;
    }
    if (num%2 == 0 || num == 1)
        return  false;
    else {
        for (int i = 3; i<=sqrt(num); i+=2) {
            if (num%i==0) {
                return false;
            }
        }
        return true;
    }
}

void dfs(int slted, int sum, int index)
{ //slted is how many numbers are already selected, index is the index of the number to select
    if (slted == k) {
        if (isprime(sum))
            cntans++;
        return;
    }
    for (int i=index; i<n; i++) {
        dfs(slted+1, sum+s[i], i+1);
    }
}

int main()
{
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    dfs (0, 0, 0);
    cout << cntans;
    return 0;
}