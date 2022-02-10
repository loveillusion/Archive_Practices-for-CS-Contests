#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    string b[n];
    string sum[n];
    int temp, tempa, tempb, addon = 0, asz = 0, bsz = 0, sz;
    char cha = 100, chb = 100;
    string addin;
    for (int i = 0; i<n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i<n; i++)
    {
        asz = a[i].size();
        bsz = b[i].size();
        if (asz > bsz)
            sz = asz;
        else
            sz = bsz;

        //calculate each place
        for (int h = 1; h <= sz; h++)
        {
            if (asz - h < 0) {
                cha = '0';
            } else
                cha = a[i].at(asz-h);

            if (bsz - h < 0) {
                chb = '0';
            } else
                chb = b[i].at(bsz-h);

            //--------------------------
            tempa = cha - '0';
            tempb = chb - '0';
            temp = tempa + tempb + addon;
            if (temp>=10)
            {
                temp = (tempa + tempb + addon)%10;
                addon = 1;
            }
            else {
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
        if (i != n-1)
            cout << endl;
    }
    return 0;
}