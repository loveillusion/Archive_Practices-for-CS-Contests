#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    int row = 1;
    int cntrow = 0;
    int cnt = 0;
    int numerator=row+1;
    int denominator=0;
    bool direction = true;
    while(true) {
        if (cnt==N)
            break;
        if(cntrow==row) {
            row++;
            cntrow=0;
            direction = !direction;
            if (direction) {
                numerator=row+1;
                denominator=0;
            } else {
                numerator=0;
                denominator=row+1;
            }
        }
        cnt++;
        cntrow++;
        if (direction) {
            numerator--;
            denominator++;
        } else {
            numerator++;
            denominator--;
        }
    }
    cout << numerator << "/" << denominator;
    return 0;
}
