#include <bits/stdc++.h>

using namespace std;

string add(string num1, string num2)
{
    string anstring;
    int len1 = num1.length();
    int len2 = num2.length();
    if (len1 < len2) {
        for (int i = 0; i < len2 - len1; i++)
            num1 = "0" + num1;
    } else {
        for (int i = 0; i < len1 - len2; i++)
            num2 = "0" + num2;
    }
    len1 = num1.length();
    int carry = 0;
    int temp;
    for (int i = len1 - 1; i >= 0; i--) {
        temp = num1[i] - '0' + num2[i] - '0' + carry;
        carry = temp / 10;
        temp %= 10;
        anstring = char(temp + '0') + anstring;
    }
    if (carry != 0) anstring = char(carry + '0') + anstring;
    return anstring;
}

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    string ans = add(num1, num2);
    cout << ans << endl;
    return 0;
}