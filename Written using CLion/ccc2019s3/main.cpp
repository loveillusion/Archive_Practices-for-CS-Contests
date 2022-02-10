//arithmetic square
#include <bits/stdc++.h>

using namespace std;

string str[3][3];
int num[3][3];

void fillin()
{
    for (int r = 0; r < 2; r++) {
        for (int i = 0; i < 3; i++) {
            for (int m = 0; m < 3; m++) {
                if (str[i][m] == "X") {
                    if (i == 0 && str[1][m] != "X" && str[2][m] != "X") {
                        num[0][m] = num[1][m] * 2 - num[2][m];
                        str[0][m] = to_string(num[0][m]);
                    } else if (i == 1 && str[0][m] != "X" && str[2][m] != "X") {
                        num[1][m] = (num[0][m] + num[2][m]) / 2;
                        str[1][m] = to_string(num[1][m]);
                    } else if (i == 2 && str[0][m] != "X" && str[1][m] != "X") {
                        num[2][m] = num[1][m] * 2 - num[0][m];
                        str[2][m] = to_string(num[2][m]);
                    } else if (m == 0 && str[i][1] != "X" && str[i][2] != "X") {
                        num[i][0] = num[i][1] * 2 - num[i][2];
                        str[i][0] = to_string(num[i][0]);
                    } else if (m == 1 && str[i][0] != "X" && str[i][2] != "X") {
                        num[i][1] = (num[i][0] + num[i][2]) / 2;
                        str[i][1] = to_string(num[i][1]);
                    } else if (m == 2 && str[i][0] != "X" && str[i][1] != "X") {
                        num[i][2] = num[i][1] * 2 - num[i][0];
                        str[i][2] = to_string(num[i][2]);
                    }
                }
            }
        }
    }
}

int main() {
    for (int i=0; i<3; i++) {
        for (int m=0; m<3; m++) {
            cin >> str[i][m];
            if (str[i][m]!="X") {
                num[i][m]=stoi(str[i][m]);
            }
        }
    }

    fillin();

    for (int i=0; i<3; i++) {
        for (int m = 0; m < 3; m++) {
            cout << num[i][m] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
8 9 10
16 X 20
24 X 30

X X 10
16 X 20
24 X X
 */