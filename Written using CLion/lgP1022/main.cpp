#include <bits/stdc++.h>

using namespace std;

int main() {
    string equation;
    char c;
    getline(cin, equation);
    int constant = 0, x = 0, temp;
    int sign = '+';
    bool ls = true;
    string stemp;
    string unknown;
    for (int i = 0; i < equation.length(); i++) {
        c = equation[i];

        if (ls) {
            if ('0' <= c && c <= '9') {
                stemp += c;
            } else if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
                unknown=c;
                if (stemp.empty()) {
                    temp = 1;
                } else {
                    temp = stoi(stemp);
                }
                if (sign == '+') {
                    x += temp;
                }
                if (sign == '-') {
                    x -= temp;
                }
                stemp.clear();
            } else {
                if (stemp.empty()) {
                    temp = 0;
                } else {
                    temp = stoi(stemp);
                }
                if (sign == '+') {
                    constant += temp;
                }
                if (sign == '-') {
                    constant -= temp;
                }
                stemp.clear();
                sign = c;
                if (c == '=') {
                    ls = false;
                    sign = '+';
                }
            }
        } else {
            if ('0' <= c && c <= '9') {
                stemp += c;
                if (i==equation.length()-1) {
                    temp = stoi(stemp);
                    if (sign == '+') {
                        constant -= temp;
                    }
                    if (sign == '-') {
                        constant += temp;
                    }
                }
            } else if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
                unknown=c;
                if (stemp.empty()) {
                    temp = 1;
                } else {
                    temp = stoi(stemp);
                }
                if (sign == '+') {
                    x -= temp;
                }
                if (sign == '-') {
                    x += temp;
                }
                stemp.clear();
            } else {
                if (stemp.empty()) {
                    temp = 0;
                } else {
                    temp = stoi(stemp);
                }
                if (sign == '+') {
                    constant -= temp;
                }
                if (sign == '-') {
                    constant += temp;
                }
                stemp.clear();
                sign = c;
            }
        }
    }
    constant = constant * -1;
    double ans = (double)constant / (double)x;
    if (ans==-0.0) {
        cout << unknown << "=0.000";
    } else
        cout << unknown << "=" << fixed << setprecision(3) << ans;
    return 0;
}
