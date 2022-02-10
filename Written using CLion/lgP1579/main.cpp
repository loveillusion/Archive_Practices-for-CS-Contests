#include <bits/stdc++.h>

using namespace std;

int given;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    int save[3];
    int ans[3];
    bool exit = false;
    for (int i=2; i<n; i++) {
        if(exit)
            break;
        if (prime[i]) {
            save[0] = i;
            for (int m=2; m<n; m++) {
                if(exit)
                    break;
                if (prime[m]) {
                    save[1] = m;
                    for (int y=2; y<n; y++) {
                        if(exit)
                            break;
                        if(prime[y]) {
                            save[2] = y;
                            if (save[0]+save[1]+save[2]==n) {
                                ans[0] = save[0];
                                ans[1] = save[1];
                                ans[2] = save[2];
                                exit = true;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << ans[0] << " " << ans[1] << " " << ans[2];
}

int main() {
    cin >> given;
    SieveOfEratosthenes(given);
    return 0;
}
