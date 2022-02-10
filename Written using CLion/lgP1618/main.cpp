#include <bits/stdc++.h>

using namespace std;

int abc[3], var[3], n[9];
double diff1=0, diff2=0;
bool nosolution = true;

int main() {
    for (int i=0; i<3; i++)
        cin >> abc[i];
    diff1 = (double)abc[1]/abc[0];
    diff2 = (double)abc[2]/abc[0];

    for (int num=123; num<=765; num++) {
        double check;
        var[0] = num;
        check = (double)num*diff1;
        if (check==(int)check)
            var[1] = (int)check;
        else
            continue;
        check = (double)num*diff2;
        if (check==(int)check)
            var[2] = (int)check;
        else
            continue;
        if (var[1]>987 || var[2]>987)
            break;

        n[2] = var[0]%10;
        n[1] = (var[0]%100-n[2])/10;
        n[0] = (var[0]-n[1]*10-n[2])/100;
        n[5] = var[1]%10;
        n[4] = (var[1]%100-n[5])/10;
        n[3] = (var[1]-n[4]*10-n[5])/100;
        n[8] = var[2]%10;
        n[7] = (var[2]%100-n[8])/10;
        n[6] = (var[2]-n[7]*10-n[8])/100;

        bool de = true;
        int temp = 0;

        for (int i = 1; i <= 9; i++)
        {
            for (int m = 0; m <= 8; m++)
            {
                if (n[m] == i)
                {
                    temp++;
                }
                if (n[m] == 0)
                    de = false;
            }
            if (temp > 1)
            {
                de = false;
                break;
            }
            temp = 0;
        }

        if (de)
        {
            cout << var[0] << " " << var[1] << " " << var[2] << endl;
            nosolution = false;
        }
    }
    if (nosolution)
        cout << "No!!!";
    return 0;
}
