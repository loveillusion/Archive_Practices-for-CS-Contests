#include <bits/stdc++.h>

using namespace std;

int a, b;

bool isprime(int num)
{
    if (num%2 == 0)
        return  false;
    else {
        for (int i = 3; i*i<=num; i+=2) {
            if (num%i==0) {
                return false;
            }
        }
        return true;
    }
}

void palindromes(int n) {
    int sum=0;
    int k=n;
    while(n!=0) {
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==k && isprime(sum)) {
        cout << sum << endl;
    }
}

int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int main() {
    cin >> a >> b;
    if (b>9999999)
        b = 9999999;
    for (int i=a; i<=b; i++) {
        if (countDigit(i)%2==1 || i==11) {
            palindromes(i);
        }
    }
    return 0;
}