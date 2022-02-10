#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n], b[n], addin;
    string sum[n];
    int sz[n], addon=0, tempa=0, tempb=0, temp=0;
    char ab[n];
    char cha='0', chb='0';
    for (int i = 0; i<n; i++) {
        cin >> a[i] >> b[i];
        if (a[i].size()>b[i].size()) {
            sz[i] = a[i].size();
            ab[i] = 'a';
        } else {
            sz[i] = b[i].size();
            ab[i] = 'b';
        }
    }
    for (int i = 0; i<n; i++) {
        for (int h = 0; h<sz[i]; h++) {
            if (ab[i]=='a') {
                cha = a[i].at(a[i].size()-h);
                if (b[i].size()<h)
                    chb = '0';
                else
                    chb = b[i].at(b[i].size()-h);
            } else if (ab[i]=='b') {
                chb = b[i].at(b[i].size()-h);
                if (a[i].size()<h)
                    cha = '0';
                else
                    cha = a[i].at(a[i].size()-h);
            }

            tempa = cha - '0';
            tempb = chb - '0';
            if (tempa + tempb>=10)
            {
                temp = (tempa + tempb)%10 + addon;
                addon = 1;
            }
            else {
                temp = tempa + tempb + addon;
                addon = 0;
            }
            addin = to_string(temp);
            sum[i].insert(0, addin);
        }
        if (addon == 1) {
            sum[i].insert(0, "1");
            addon = 0;
        }
        cout << "Case " << i+1 << ":" << endl;
        cout << a[i] << " + " << b[i] << " = " << sum[i] << endl;
        cout << endl;
    }
    return 0;
}